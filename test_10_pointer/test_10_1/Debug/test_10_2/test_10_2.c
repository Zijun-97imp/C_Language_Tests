//
// test_10_2.c
// zijun fang
// the pointer session content
#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//// example 1
//// different pointer to the variable address
//int main(void)
//{
//	int* p;  // any 'p' address will cover the content of '*p'; this access will be rejected by the language
//	*p = 20;
//	
//}




//// example 2
//// 野值问题 - 溢出数值范围的野值 将不再被赋值进循环从而出错
//int main(void)
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int len = 0;
//	int* p = a;
//	len = strlen(a);
//	for (i = 0; i <= 12; i++)
//	{
//		//*p = i;
//		//p++;        // 利用对地址指针变量p的逐步增加,对应的循环i也会被赋值进入循环
//		*p++ = i;     // 数组越界的野值问题
//		printf("%d ", a[i]);
//	}
//}




//// example 3
//// 临时变量只有在全局不被替换的情况下提取地址信息是不被影响的
//test()
//{
//	int a = 10;           // 此时的‘a’为局部变量 ---》 ‘a’此时占领了固定的地址
//	return &a;            // 返回了取地址‘a’ 而返回的同时 该地址也同时的被系统收走
//}
//
//int main(void)
//{
//	int* p = test();      // 将进入上方的函数中  ---》 索取到的地址信息为原地址遗留信息
//	printf("%d\n", *p);    // 此时的取地址p将无法返回至系统索取该变量‘a’所对应的地址信息 --- 非法的访问
//	printf("%p\n", p);
//}

//// 对未赋值的变量进行不定性指针定义
//int main(void)
//{
//	//int a = 10;
//	//int b = 0;
//	//int* pa = &a;
//	//int* p = NULL;        // NULL ---- used for the initialised of the pointer variable
//	int a = 10;
//	int* p = NULL;          // authorised the initialisation of the pointer in the programme
//	p = &a;
//	if (p != NULL)          // use the pointer to check whether it is avaliable or not
//	{
//		*p = 20;
//	}
//	printf("%d\n", *p);     // 'p' - it is a position; '*p' is a pointer variable content reader
//	printf("%p\n", p);
//}







//// example 4
//// 关于指针的加减运算
//int main(void)
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);             // 数组内部的元素个数
//	int* p = arr;                                        //  指针对应的数组名 = 首元素地址
//	//for (i = 0; i < size; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 2;                                           // 向后跳一个整型
//	//	/*p++;*/
//	//}
//	for (i = 0; i < size / 2; i++)
//	{
//		printf("%d ", *p);
//		p = p + 2;
//	}
//}



//// example 4b
//// 指针+-整数
////   -----------------------------------------------------------------
////   | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
////   -----------------------------------------------------------------
////   after insert the data into the memory address
////   -----------------------------------------------------------------
////   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |...|...|...|...|...|...|
////   -----------------------------------------------------------------
//
//
//#define N_VALUES 5
//
//int main(void)
//{
//	float values[N_VALUES];
//	float *vp;
//	int i;
//	// 指针+-整数: 指针的关系运算
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		for (i = 0; i < 5; i++)
//		{
//			printf("%d ", values[i]);
//			*vp++ = 0;
//		}
//
//	}
//}






//// example 5
//// 关于指针与指针之间的加减法
//int main(void)
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[1]);
//	printf("%d\n", &arr[9] - &ch[0]); // error
//}


//// example 5b
//// 利用递归法来计算字符串的长度
//// 代替原有‘strlen’指令
//// my_strlen for calculating the string length
//
//int my_strlen(char* str)
//{
//	char* start = str;                       // starting letter
//	char* end = str;                         // end string letter
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main(void)
//{
//	char arr[] = "hello world!";
//	int len = my_strlen(arr);
//	printf("string length: %d\n", len);
//}


//// example 5b
//// 将上诉的递归方法进行简化
//// 利用指针变量进行简化
//#define N_VALUES 100
//int main(void)
//{
//	int arr[N_VALUES] = {0,1,2,3,4,5,6,7,8,9};
//	int *vp;
//	// 避免使用一下方法进行书写
//	// 允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较,但是不允许
//	// 与指向第一个元素之前的那个内存位置的指针进行比较。
//	/*for (vp = &arr[N_VALUES-1]; vp > &arr[0]; vp--)
//	{
//		*vp = 0;
//	}
//	printf("%d\n", *vp);*/
//	
//	// 正确的书写方法
//	for (vp = &arr[N_VALUES]; vp > &arr[0];)
//	{
//		*--vp = 0;
//	}
//}








//// example 6
//int main(void)
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	// the name of array is the first element position in memory
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	// 1. &arr --- the name of array address is the whole array address
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);       // each step is taken up 40 bites of memory
//
//	// 2. sizeod(arr) - sizeof(NAME_OF_ARRAY) - sizeof calculating the whole array memory space
//	printf("%d\n", sizeof arr);
//}








//// example 7
//#define N 20
//int main(void)
//{
//	int arr[N] = { 0 };
//	printf("%p\n", arr);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < N; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < N; i++)
//	//{
//	//	printf("%p ======== %p\n", p+i, &arr[i]);
//	//}
//}














//// example 9
//// secondary pointer of the variable
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;       // secondary pointer address
//	**ppa = 20;            // secondary pointer value confirmation
//	printf("%p\n", pa);
//	printf("%p\n", ppa);
//	printf("%d\n", a);
//}







//// example 10
//// the pointer array ----- the array which contains the pointers
//// pointer for an array ----- the pointer variable is an array
//#define N_VALUES 3
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	// how to put these in an array
//	// the integer variable address of pointer present in the array
//	// the 'char-array' ---- the array with character
//	// the 'pointer-array' ---- the array include pointers
//	int* arr[N_VALUES] = { &a,&b,&c };
//	// using the for loop to print out the elements content in array
//	int i = 0;
//	for (i = 0; i < N_VALUES; i++)
//	{
//		printf(" %d == %p", *(arr[i]), arr[i]);
//	}
//}








































