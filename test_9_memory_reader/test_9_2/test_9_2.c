#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//// ����ָ������Ķ���
//// ��������ռ�ڴ�ռ��С
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));            // the calculation result of calculation by defined is 'short' - 2 bite space
//	printf("%d\n", s);
//
//
//	//int a = 10;
//	//char c = 'r';
//	//char* p = &c;
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));     // ���α��ʽ��С4����
//	//printf("%d\n", sizeof a);
//	///*printf("%d\n", sizeof int a);*/  // ���Ǵ���ı��ʽ�� ���������α����ı��������������
//
//	//printf("%d\n", sizeof(c));     // ������ĸ�Ĵ�С1����
//	//printf("%d\n", sizeof(char));
//
//	//printf("%d\n", sizeof(p));     // �ڴ�Ĵ�Ԫ����ռ��С4����
//	//printf("%d\n", sizeof(char*));
//
//	//printf("%d\n", sizeof(arr));   // ÿ������ռλ4���� �ܹ�10������������� ��С40����
//	//printf("%d\n", sizeof(int [10]));
//	return 0;
//}





//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));      // ~:��λȡ��
//	printf("%d\n", a);
//	a = a ^ (1 << 2);
//	printf("%d\n", a);
//	return 0;
//}




//// test the function with the space length of different type of array
//// un-return void function
//void test1(int arr[])
//{
//	printf("the_size_of_int array: %d\n", sizeof(arr)); // the array transfer the data information to the print function will deliver the first element charaterictics at its address
//}
//
//void test2(char ch[])
//{
//	printf("the_size_of_char array: %d\n", sizeof(ch)); // ���鴫��ʱֻ�Ὣ��Ԫ�ص���Ϣ���д�ӡ~���Դ�С����Ԫ�ظ�����Ԫ�����ʾ���
//}
//
//int main()
//{
//	int array1[10] = { 0 };
//	char array2[10] = { 0 };
//	printf("the_size_of_int array: %d\n", sizeof(array1));
//	printf("the_size_of_char array: %d\n", sizeof(array2));
//	test1(array1);
//	test2(array2);
//	return 0;
//}





//// ��λ�� (&) �߼��� (&&)
//// ��λ�� (|) �߼��� (||)
//int main()
//{
//	int a = 1;
//	int b = 4;
//	int c = a & b;
//	int d = a && b;
//	int e = a | b;
//	int f = a || b;
//	printf("c = %d\nd = %d\ne = %d\nf = %d\n", c, d, e, f);
//	return 0;
//}



//// example 5
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	// i = a++ && ++b && d++;     // ����a++�����ȶ��������,���Դ��߼����ж�Ϊ�� �����������ִ��
//	i = a++ || ++b || d++;  // ����a++�����ȶ��������,���Դ��߼����ж�Ϊ�� �������������ִ��
//	printf("i = %d", i);
//	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
//	return 0;
//}





//// example 6
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("b = %d\n", b);
//	// ��ľ������
//	// exp1 ? exp2 : exp3
//	// if the exp1 is TURE, then do the exp2; else exp3
//	// a>5 ? 3 : -3
//	b = (a > 5 ? 3 : -3);
//	printf("b = %d\n", b);
//	return 0;
//}




//// for the maximum number - ��ľ������
//// example 6
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	int max2 = 0;
//	printf("please insert the number a:>\n");
//	printf("please insert the number b:>\n");
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("the maximum number :%d\n", max);
//
//	// ��ľ������
//	max2 = (a > b ? a : b);
//	printf("the maximum number :%d\n", max2);
//
//	return 0;
//}





//// () �������ò�����
//// example 6-b
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("please insert the number a:>\n");
//	printf("please insert the number b:>\n");
//	scanf_s("%d %d", &a, &b);
//	// ���ú�����ʱ��()���Ǻ������ò�����
//	max = get_max(a, b);
//	printf("the maximum number: %d\n", max);
//	return 0;
//}





//// example 7
//// read the different type of recording data
//
//// 'struct' - the structural array input function
//struct Student
//{
//	char name[20];
//	int age;
//	char id_num[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Student s1 = { "John Deponden", 21, "CID01811420" };
//	// ����ָ�������s1�����ڱ���
//	struct Student* ps = &s1;
//	// ���õ�ַps��ӡs1�������Ϣ
//	//printf("student name: %s\n", (*ps).name);
//	//printf("student age: %d\n", (*ps).age);
//
//	// ���Ӹ߼���ָ���﷽��
//	printf("student name: %s\n", ps->name);
//	printf("student age: %d\n", ps->age);
//	printf("student id: %s\n", ps->id_num);
//
//
//	// �ͳ�ı��ʽ - �ǳ����������׳���
//	//printf("student name:%s\nstudent age: %d\nstudent id: %s\n", s1.name, s1.age, s1.id_num);
//
//	return 0;
//}




//// �������ݴ���Ķ����Ʊ任��
////* ԭ�� ---(ȡ��)---> ���� ---(+1)--->���� *//
//// example 8
//int main()
//{
//	// ��������!
//	char a = 3, b = 127;
//	char c = a + b;
//	// ����char�������ڴ��д�������ݶ����Ʊ��
//	// �������������ݽ��ᱻ��32��λ����4���ش�С���ڴ��������
//	// ����char����ֻ�ܴ���1bit��С������ ���е����ν�ֻ����ԭ�����ݵĳ�ʼ8λ��������
//	// ����:
//	// a = 00000000000000000000000000000011 (32digit, 4bite)
//	// b = 00000000000000000000000001111111 (32digit, 4bite)
//	// char a = 00000011;
//	// char b = 01111111;
//	// ���ݶ����ƵļӼ����������: char c = a+b = 00000011 + 01111111 = 10000010; (8digit, 1bite)
//
//
//
//	printf("%d\n", c);  // the result is -126
//	// ����ӡ������c("%d") ��char��ʽ��������Ϊ: 10000010 ---> ת��Ϊ����ʱ (4bite 32digit)
//	// char c�Ĳ���: 11111111111111111111111110000010
//	// char c�ķ���: 11111111111111111111111110000001
//	// char c��ԭ��: 10000000000000000000000001111110   ---> ����λ����(��ʼλ��1) �����ȡ��
//	// ���� char c ---> int c = -126
//	return 0;
//}





//// example 9
//// ���������ľ���ʵ��
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//		if (c == 0xb6000000)
//			printf("c");
//	return 0;
//}






//// example 10
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}























// ���뽨����Ψһ��ȷ·���Ĵ���










































































