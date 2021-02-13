// test_10_1.c
// zijun fang
// pointer - visit the address in the memory
// '&' - the pointer symbol
// '* _variable' - the pointer language

#define _CRT_NO_SECURE_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//// example 1
//int main()
//{
//	// mark the address of variable 'a' in the memory
//	int a = 10;
//	int* p=&a;        // to save the address information of 'a' into the variable 'p' - the address integer 'int*'
//	                  // the variable 'p' is known as the pointer variable
//	// the memory of address record; 32-digit system is keeping the memory as 32 digits for each 4 bites record;
//    //  2^32 ---> 2^32/1024KB = 4GB
//	// 4 bites in 32-digit; 8 bites in 64-digit
//
//	return 0;
//}



//// example 2
//// for different type data address record
//int main()
//{
//	//// 'sizeof calculate the data type size'
//	//// 'int' - variable type; 'int*' - variable address type
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//
//	int a = 0x11223344;                     // the address input data structure: 0x11 22 33 44;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	//printf("%p\n", pa);                   // '%p': the address data present symbol
//	//printf("%p\n", pc);
//
//	// if input data type is 'int'; the address type is 'int*'
//	// through the 'char' type to change the address content only could reach for 1 bite inside;
//	// 指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	// int*p; *p可以访问4 bites
//	// char*p; *p可以访问1bite
//	// double*p; *p可以访问8bites
//	return 0;
//}





//// example 3
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	double* pd = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	printf("%p\n", pd);
//	printf("%p\n", pd + 1);
//	// the pointer has figured out that each step forward could mean different size;
//	// i.e. (int*)p ---> p+1 ---> move forward 4 bites
//	// i.e. (char*)p ---> p+1 ---> move forward 1 bite
//	// i.e. (double*)p ---> p+1 ---> move forwar 8 bites
//	return 0;
//}




//// example 4
//int main()
//{
//	int arr[10] = { 0 };      // including 10 elements
//	// the name of array is stand for the first element address
//	// 数组名 - 代表数组内部首元素地址
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;         // the adrress add *(): the address number inside
//	}
//	return 0;
//}





// example 5
// 野指针 野变量: 指的是未经定义或赋值未初始化的指针或局部变量,默认值为随机值
// i.e. int p = 20; - this is the defined variable;
// otherwise int p; - this is the undefined variable;
// i.e.e int* p = arr; - defined; int* p - undefined

//int main(void)
//{
//	//int *p;                     // undefined poiinter
//	//int a;                      // undefined variable
//	////*p = 20;                     // undefined position insert a variable is WRONG!!!!!!
//	//p = 20;
//	//printf("%p\n", p);
//	//printf("%d\n", a = 20);
//}


//// pointer overwrite step cover WRONG!!!!
//// i.e.
//int main(void)
//{
//	int len = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	len = strlen(arr);
//	// for (i = 0; i <= 11; i++) - wrong one!
//	for (i = 0; i <= len; i++)
//	{
//		// when the range of pointer insert is overwrite its to the array, the last overcome content is empty and useless;
//		*(p++) = i;
//		printf("%d ", arr[i]);
//	}
//
//}