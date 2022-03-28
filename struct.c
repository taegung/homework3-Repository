#include <stdio.h>
struct student1 {//student1 구조체 정의//typedef로 구조체를 정의를 안해서 선언할때 할때 struct 사용
char lastName;
int studentId;
char grade;
};
typedef struct {//student2 구조체 정의
char lastName;
int studentId;
char grade;
} student2;
int main() {
printf("[----- [윤태경] [2019038059] -----]\n");
struct student1 st1 = {'A', 100, 'A'};//st1이라는 구조체 선언하고 lastName에 A studentId에 100 grade에 A 입력
printf("st1.lastName = %c\n", st1.lastName);//st1 lastname 출력
printf("st1.studentId = %d\n", st1.studentId);//st1 studentId 출력
printf("st1.grade = %c\n", st1.grade);//st1 grade 출력
student2 st2 = {'B', 200, 'B'};//st2이라는 구조체 선언하고 lastName에 B studentId에 200 grade에 B 입력
printf("\nst2.lastName = %c\n", st2.lastName);//st2 lastname 출력
printf("st2.studentId = %d\n", st2.studentId);//st2 studentId 출력
printf("st2.grade = %c\n", st2.grade);//st2 grade 출력
student2 st3;//st3이라는 구조체 선언
st3 = st2;//st3 구조체에 st2구조체 값들 입력
printf("\nst3.lastName = %c\n", st3.lastName);//st3 lastname 출력
printf("st3.studentId = %d\n", st3.studentId);//st3 studentId 출력
printf("st3.grade = %c\n", st3.grade);//st3 grade 출력
/* equality test */
//if(st3 == st2) /* not working */ //구조체 동등성 검사인데 if(st3==st2)이렇게 사용하면 작동이 안된다
//printf("equal\n");
//else
//printf("not equal\n");
return 0;

}