#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
printf("[----- [윤태경] [2019038059] -----]\n");
int one[] = {0, 1, 2, 3, 4};//one 배열에 0,1,2,3,입력
printf("one = %p\n", one);//one주소 출력
printf("&one = %p\n", &one);//one주소 출력
printf("&one[0] = %p\n", &one[0]);//one[0]주소출력
printf("\n");
print1(&one[0], 5);//one의 주소를 ptr에 입력
return 0;
}
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)//i는 0부터 4까지 반복
printf("%p \t %5d\n", ptr + i, *(ptr + i));//ptr+i의값(one+i의 주소)출력와 ptr+i값이 가르키는 값(one[i])출력
printf("\n");
}