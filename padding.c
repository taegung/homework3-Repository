#include <stdio.h>
struct student {
char lastName[13]; /* 13 bytes */
int studentId; /* 4 bytes */
short grade; /* 2 bytes */
};
int main()
{
printf("[----- [���°�] [2019038059] -----]\n");
struct student pst;
printf("size of student = %ld\n", sizeof(struct student));
//char lastName[13]�� padding�ؼ�16����Ʈ+ int studentId �� 4����Ʈ+ short grade��padding�ؼ� 4����Ʈ
//�� 24����Ʈ ���
printf("size of int = %ld\n", sizeof(int));//int �ڷ����� ũ�� ���
printf("size of short = %ld\n", sizeof(short));//sort �ڷ����� ũ�� ���
return 0;
}