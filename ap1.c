#include <stdio.h>
#include<stdlib.h>
void main()
{
printf("[----- [윤태경] [2019038059] -----]\n");
int list[5];
int *plist[5] = {NULL,};
plist[0] = (int *)malloc(sizeof(int));//메모리 할당
list[0] = 1;
list[1] = 100;
*plist[0] = 200;
printf("value of list[0] = %d\n", list[0]);//list[0]의 값 출력
printf("address of list[0] = %p\n", &list[0]);//list[0]의 주소 출력
printf("value of list = %p\n", list);//list 주소 출력
printf("address of list (&list) = %p\n", &list);//list 주소 출력
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]);//list[1]의 값 출력
printf("address of list[1] = %p\n", &list[1]);//list[1]의 주소 출력
printf("value of *(list+1) = %d\n", *(list + 1));//list[1]의 값 출력
printf("address of list+1 = %p\n", list+1);//list[1]의 주소 출력
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]);//plist[0]의값이 가르키는 주소의값출력
printf("&plist[0] = %p\n", &plist[0]);//plist[0]의 주소 출력
printf("&plist = %p\n", &plist);//plist주소 출력
printf("plist = %p\n", plist);//plist주소 출력
printf("plist[0] = %p\n", plist[0]);//plist[0]의 주소출력
printf("plist[1] = %p\n", plist[1]);//plist[1]의 주소출력
printf("plist[2] = %p\n", plist[2]);//plist[2]의 주소출력
printf("plist[3] = %p\n", plist[3]);//plist[3]의 주소출력
printf("plist[4] = %p\n", plist[4]);//plist[4]의 주소출력
free(plist[0]);//메모리 할당 해제
}


