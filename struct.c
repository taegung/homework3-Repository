#include <stdio.h>
struct student1 {//student1 ����ü ����//typedef�� ����ü�� ���Ǹ� ���ؼ� �����Ҷ� �Ҷ� struct ���
char lastName;
int studentId;
char grade;
};
typedef struct {//student2 ����ü ����
char lastName;
int studentId;
char grade;
} student2;
int main() {
printf("[----- [���°�] [2019038059] -----]\n");
struct student1 st1 = {'A', 100, 'A'};//st1�̶�� ����ü �����ϰ� lastName�� A studentId�� 100 grade�� A �Է�
printf("st1.lastName = %c\n", st1.lastName);//st1 lastname ���
printf("st1.studentId = %d\n", st1.studentId);//st1 studentId ���
printf("st1.grade = %c\n", st1.grade);//st1 grade ���
student2 st2 = {'B', 200, 'B'};//st2�̶�� ����ü �����ϰ� lastName�� B studentId�� 200 grade�� B �Է�
printf("\nst2.lastName = %c\n", st2.lastName);//st2 lastname ���
printf("st2.studentId = %d\n", st2.studentId);//st2 studentId ���
printf("st2.grade = %c\n", st2.grade);//st2 grade ���
student2 st3;//st3�̶�� ����ü ����
st3 = st2;//st3 ����ü�� st2����ü ���� �Է�
printf("\nst3.lastName = %c\n", st3.lastName);//st3 lastname ���
printf("st3.studentId = %d\n", st3.studentId);//st3 studentId ���
printf("st3.grade = %c\n", st3.grade);//st3 grade ���
/* equality test */
//if(st3 == st2) /* not working */ //����ü ��� �˻��ε� if(st3==st2)�̷��� ����ϸ� �۵��� �ȵȴ�
//printf("equal\n");
//else
//printf("not equal\n");
return 0;

}