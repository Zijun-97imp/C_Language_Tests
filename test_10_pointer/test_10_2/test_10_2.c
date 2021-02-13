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
//// Ұֵ���� - �����ֵ��Χ��Ұֵ �����ٱ���ֵ��ѭ���Ӷ�����
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
//		//p++;        // ���öԵ�ַָ�����p��������,��Ӧ��ѭ��iҲ�ᱻ��ֵ����ѭ��
//		*p++ = i;     // ����Խ���Ұֵ����
//		printf("%d ", a[i]);
//	}
//}




//// example 3
//// ��ʱ����ֻ����ȫ�ֲ����滻���������ȡ��ַ��Ϣ�ǲ���Ӱ���
//test()
//{
//	int a = 10;           // ��ʱ�ġ�a��Ϊ�ֲ����� ---�� ��a����ʱռ���˹̶��ĵ�ַ
//	return &a;            // ������ȡ��ַ��a�� �����ص�ͬʱ �õ�ַҲͬʱ�ı�ϵͳ����
//}
//
//int main(void)
//{
//	int* p = test();      // �������Ϸ��ĺ�����  ---�� ��ȡ���ĵ�ַ��ϢΪԭ��ַ������Ϣ
//	printf("%d\n", *p);    // ��ʱ��ȡ��ַp���޷�������ϵͳ��ȡ�ñ�����a������Ӧ�ĵ�ַ��Ϣ --- �Ƿ��ķ���
//	printf("%p\n", p);
//}

//// ��δ��ֵ�ı������в�����ָ�붨��
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
//// ����ָ��ļӼ�����
//int main(void)
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);             // �����ڲ���Ԫ�ظ���
//	int* p = arr;                                        //  ָ���Ӧ�������� = ��Ԫ�ص�ַ
//	//for (i = 0; i < size; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 2;                                           // �����һ������
//	//	/*p++;*/
//	//}
//	for (i = 0; i < size / 2; i++)
//	{
//		printf("%d ", *p);
//		p = p + 2;
//	}
//}



//// example 4b
//// ָ��+-����
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
//	// ָ��+-����: ָ��Ĺ�ϵ����
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
//// ����ָ����ָ��֮��ļӼ���
//int main(void)
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[1]);
//	printf("%d\n", &arr[9] - &ch[0]); // error
//}


//// example 5b
//// ���õݹ鷨�������ַ����ĳ���
//// ����ԭ�С�strlen��ָ��
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


// // example 5b
// // �����ߵĵݹ鷽�����м�
// // ����ָ��������м�
// #define N_VALUES 100
// int main(void)
// {
// 	char arr[N_VALUES];
// 	char *vp;
// 	for (vp = &arr[N_VALUES-1]; vp >= &arr[0]; vp--)
// 	{
// 		*vp = 0;
// 	}
// }



// example 6
// 



































