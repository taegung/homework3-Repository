#include<stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [윤태경] [2019038059] -----]\n");
int **x;
printf("sizeof(x) = %lu\n", sizeof(x));//*x의 크기
printf("sizeof(*x) = %lu\n", sizeof(*x));//*x의 크기
printf("sizeof(**x) = %lu\n", sizeof(**x));//int 정수의 크기
}