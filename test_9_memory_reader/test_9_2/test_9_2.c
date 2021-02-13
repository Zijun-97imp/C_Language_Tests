#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//// 对于指针变量的定义
//// 变量的所占内存空间大小
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
//	//printf("%d\n", sizeof(a));     // 整形表达式大小4比特
//	//printf("%d\n", sizeof a);
//	///*printf("%d\n", sizeof int a);*/  // 这是错误的表达式： 涵盖了整形表述的变量必须添加括号
//
//	//printf("%d\n", sizeof(c));     // 单个字母的大小1比特
//	//printf("%d\n", sizeof(char));
//
//	//printf("%d\n", sizeof(p));     // 内存寄存元素所占大小4比特
//	//printf("%d\n", sizeof(char*));
//
//	//printf("%d\n", sizeof(arr));   // 每个整形占位4比特 总共10个整形组成数组 大小40比特
//	//printf("%d\n", sizeof(int [10]));
//	return 0;
//}





//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));      // ~:按位取反
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
//	printf("the_size_of_char array: %d\n", sizeof(ch)); // 数组传参时只会将首元素的信息进行打印~所以大小不受元素个数及元素性质决定
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





//// 按位与 (&) 逻辑与 (&&)
//// 按位或 (|) 逻辑或 (||)
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
//	// i = a++ && ++b && d++;     // 由于a++属于先定义后算数,所以此逻辑与判定为假 后续计算均不执行
//	i = a++ || ++b || d++;  // 由于a++属于先定义后算数,所以此逻辑或判定为真 后续计算均有序执行
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
//	// 三木操作符
//	// exp1 ? exp2 : exp3
//	// if the exp1 is TURE, then do the exp2; else exp3
//	// a>5 ? 3 : -3
//	b = (a > 5 ? 3 : -3);
//	printf("b = %d\n", b);
//	return 0;
//}




//// for the maximum number - 三木操作法
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
//	// 三木操作法
//	max2 = (a > b ? a : b);
//	printf("the maximum number :%d\n", max2);
//
//	return 0;
//}





//// () 函数调用操作符
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
//	// 调用函数的时候()就是函数调用操作符
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
//	// 利用指针变量将s1储存在本地
//	struct Student* ps = &s1;
//	// 利用地址ps打印s1里面的信息
//	//printf("student name: %s\n", (*ps).name);
//	//printf("student age: %d\n", (*ps).age);
//
//	// 更加高级的指针表达方法
//	printf("student name: %s\n", ps->name);
//	printf("student age: %d\n", ps->age);
//	printf("student id: %s\n", ps->id_num);
//
//
//	// 最传统的表达式 - 非常复杂且容易出错
//	//printf("student name:%s\nstudent age: %d\nstudent id: %s\n", s1.name, s1.age, s1.id_num);
//
//	return 0;
//}




//// 关于数据储存的二进制变换码
////* 原码 ---(取反)---> 反码 ---(+1)--->补码 *//
//// example 8
//int main()
//{
//	// 整形提升!
//	char a = 3, b = 127;
//	char c = a + b;
//	// 利用char类型在内存中储存的数据二进制表达
//	// 正常的整形数据将会被以32个位数的4比特大小的内存框所储存
//	// 但是char仅仅只能储存1bit大小的数据 所有的整形将只保留原有数据的初始8位二进制码
//	// 例如:
//	// a = 00000000000000000000000000000011 (32digit, 4bite)
//	// b = 00000000000000000000000001111111 (32digit, 4bite)
//	// char a = 00000011;
//	// char b = 01111111;
//	// 根据二进制的加减法运算规则: char c = a+b = 00000011 + 01111111 = 10000010; (8digit, 1bite)
//
//
//
//	printf("%d\n", c);  // the result is -126
//	// 当打印的整形c("%d") 的char形式二进制码为: 10000010 ---> 转换为整形时 (4bite 32digit)
//	// char c的补码: 11111111111111111111111110000010
//	// char c的反码: 11111111111111111111111110000001
//	// char c的原码: 10000000000000000000000001111110   ---> 符号位不变(初始位次1) 其余的取反
//	// 所以 char c ---> int c = -126
//	return 0;
//}





//// example 9
//// 整形提升的具体实例
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























// 必须建立有唯一正确路径的代码










































































