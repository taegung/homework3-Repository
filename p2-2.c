#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
printf("[----- [���°�] [2019038059] -----]\n");
int one[] = {0, 1, 2, 3, 4};//one �迭�� 0,1,2,3,�Է�
printf("one = %p\n", one);//one�ּ� ���
printf("&one = %p\n", &one);//one�ּ� ���
printf("&one[0] = %p\n", &one[0]);//one[0]�ּ����
printf("\n");
print1(&one[0], 5);//one�� �ּҸ� ptr�� �Է�
return 0;
}
void print1 (int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */
int i;
printf ("Address \t Contents\n");
for (i = 0; i < rows; i++)//i�� 0���� 4���� �ݺ�
printf("%p \t %5d\n", ptr + i, *(ptr + i));//ptr+i�ǰ�(one+i�� �ּ�)��¿� ptr+i���� ����Ű�� ��(one[i])���
printf("\n");
}