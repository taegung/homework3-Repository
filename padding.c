#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
printf("[----- [윤태경] [2019038059] -----]\n");
struct student pst;
printf("size of student = %ld\n", sizeof(struct student));
//char lastName[13]의 padding해서16바이트+ int studentId 의 4바이트+ short grade의padding해서 4바이트
//합 24바이트 출력
printf("size of int = %ld\n", sizeof(int));//int 자료형의 크기 출력
printf("size of short = %ld\n", sizeof(short));//sort 자료형의 크기 출력
return 0;
}