#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void)
{
printf("[----- [���°�] [2019038059] -----]\n");
for(i=0; i < MAX_SIZE; i++)//i�� 0���� MAX_SIZE-1 ���� �ݺ�
input[i] = i;
/* for checking call by reference */
printf("address of input = %p\n", input);//inuput �ּ� ���
answer = sum(input, MAX_SIZE);//ȣ��� input(=&input[0])�� �ּҸ� ��� �ְ�->�ּҰ� sum�Լ��� list�� ����
printf("The sum is: %f\n", answer);//answer�� ���
}
float sum(float list[], int n)//input�� �ּҸ� list�� �޾�,input �迭�� list�� ��������
{//���� �״�� ���� n�� ���� n�� ���� �ǵ� caller�� ���� ������ ����
printf("value of list = %p\n", list);//input�� �ּ� ���
printf("address of list = %p\n\n", &list);//list �ּ� ���
int i;
float tempsum = 0;
for(i = 0; i < n; i++)//i�� 0����n-1���� �ݺ�
tempsum += list[i];//tempsum�� list[0]����list[n-1]���� ����
return tempsum;//tempsum ��ȯ
}