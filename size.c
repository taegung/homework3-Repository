#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [���°�] [2019038059] -----]\n");
int **x;
printf("sizeof(x) = %lu\n", sizeof(x));//*x�� ũ��
printf("sizeof(*x) = %lu\n", sizeof(*x));//*x�� ũ��
printf("sizeof(**x) = %lu\n", sizeof(**x));//int ������ ũ��
}