#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
printf("[----- [윤태경] [2019038059] -----]\n");
for(i=0; i < MAX_SIZE; i++)//i는 0부터 MAX_SIZE-1 까지 반복
input[i] = i;
/* for checking call by reference */
printf("address of input = %p\n", input);//inuput 주소 출력
answer = sum(input, MAX_SIZE);//호출시 input(=&input[0])은 주소를 담고 있고->주소가 sum함수의 list에 복사
printf("The sum is: %f\n", answer);//answer값 출력
}
float sum(float list[], int n)//input의 주소를 list가 받아,input 배열을 list를 통해접근
{//값을 그대로 변수 n에 복사 n이 변경 되도 caller의 값은 변하지 않음
printf("value of list = %p\n", list);//input의 주소 출력
printf("address of list = %p\n\n", &list);//list 주소 출력
int i;
float tempsum = 0;
for(i = 0; i < n; i++)//i는 0부터n-1까지 반복
tempsum += list[i];//tempsum에 list[0]부터list[n-1]까지 더함
return tempsum;//tempsum 반환
}