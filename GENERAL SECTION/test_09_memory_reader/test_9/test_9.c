#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//int main()
//{
//	int a = 5 / 2;  // due to the forced define that the division process outcome with a integer
//	// the result is integer with 2;
//	printf("a = %d\n", a);
//
//	double b = 5 / 2.0;  // need to get a float number - using a float number in the calculation
//	printf("b = %lf\n", b);
//
//	double c = 5 / 2.0;
//	printf("c = %1.2lf\n", c); // the floating number express after the dot
//
//	int d = 5 % 2;
//	printf("d = %d\n", d);
//	return 0;
//} 




//// the float move
//// under the binary situation
//int main()
//{
//	int a = -16;
//	// >> -- ���Ʋ�����
//	// �ƶ����Ƕ����Ƶ�λ��
//	// ���� a = 16|10 ---> a = 1000|2
//	// b = a >> 1 ---> b = 1000 >> 1 = 100|2 ---> b = 8|10
//	// (a-space) 32bit of the system: a = 16|10 = 00000000000000000000000000001000|32bit
//	// (b-space) 32bit of the system: 00000000000000000000000000000100>|32bit = 8;
//	// �������� ---���ұ߶��� ��߲�ԭ����λ
//	// �߼����� ---���ұ߶��� ��߼�0
//
//	int b = a >> 1;
//	printf("b = %d\n", b); // ������λ ������ԭ����
//
//
//
//	int c = -16;
//	unsigned d = *(unsigned*)&c;
//	printf("d = %d\n", d >> 2); // �߼����� ��ԭ��������λ�ý����滻Ϊ1
//
//	// ���ϲ�����ԭ�� - �����ƵĹ�ϵ
//	// �����Ķ����Ʊ�����: Դ�롢���롢����
//	// ���浽�ڴ���ǲ���
//	// �� a = -1 Ϊ��
//	// Դ�� - 10000000000000000000000000000001
//	// ���� - 11111111111111111111111111111110
//	// ���� - 11111111111111111111111111111111
//	
//
//	return 0;
//}

//// the floating number or integer of digit move
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	// 5 == 00000000000000000000000000000101 = 2^2+2^0
//	printf("%d\n", b);
//	return 0;
//}






//// the operation of digit move
//// ��λ�� ��λ�� ��λ���
//int main()
//{
//	// ��λ�� - &
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	// 3 == 00000000000000000000000000000011
//	// 5 == 00000000000000000000000000000101
//	//3&5 = 00000000000000000000000000000001
//	//3&5 = 1|10
//	printf("c = %d\n", c);
//
//	// ��λ��
//	int num1 = 3;
//	int num2 = 5;
//	int num = num1 | num2;
//	// 3 == 00000000000000000000000000000011
//
//    // 5 == 00000000000000000000000000000101
//    //3|5 = 00000000000000000000000000000111
//    //3|5 = 2^2+2^1+2^0 = 7|10
//    printf("num = %d\n", num);
//
//	// ��λ��� - ��ο��ͬΪ0������Ϊ1
//	int x = 3;
//	int y = 5;
//	int z = x ^ y;
//	// 3 == 00000000000000000000000000000011
//	// 5 == 00000000000000000000000000000101
//	//3^5 = 00000000000000000000000000000110
//	//3^5 = 2^2+2^1 = 6|10
//	printf("z = %d\n", z);
//    return 0;
//}







//// a number exchange without adding a new variable
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("Please insert the number a:>");
//	scanf_s("%d", &a);
//	printf("Please insert the number b:>");
//	scanf_s("%d", &b);
//
//	// exchange the int_number as binary as each digits
//	// 32-bit express
//	// a = 0000000000000000000000000000YNNY;
//	// b = 0000000000000000000000000000NNYN;
//	// a^b = 0000000000000000000000000000YNYY; == a|new
//	// a^b = 0000000000000000000000000000YNNY; == b|new = a|original
//	// a^b = 0000000000000000000000000000NNYN; == a|new = b|original
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}





//// count the total number of 1 display in the binary expression session
//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("Please insert the number:>");
//	scanf_s("%d", &num);
//
//	//// ͳ��num�������м���1
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//
//	//// ��λ��1��ͳ�Ƹ���
//	//// a = 00000000000000000000000000001100; - 12
//	//// ��λ��һcount
//	//// 1 = 00000000000000000000000000000001; - 1
//	////a>>i = 00000000000000000000000000000110; count 0
//	////a>>i = 00000000000000000000000000000011; count 1
//	////a>>i = 00000000000000000000000000000001; count 2 - scan over
//	//int i = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (1 == ((num >> i) & 1))
//	//		count++;
//	//}
//
//
//	printf("the '1' count in the number: %d\n", count);
//	return 0;
//}





//// example 5
//int main()
//{
//	int a = 0;
//	/*printf("%d\n", !a);*/
//	if (a)
//	{
//		printf("hello you!");
//	}
//	if (!a)
//	{
//		printf("hello world!");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;     // the position in the memory to express 'a'
//	*p = 20;
//	printf("%d\n", a);   // replace the content in the memory postion p
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));     // ���α��ʽ��С4����
//	printf("%d\n", sizeof a);
//	/*printf("%d\n", sizeof int a);*/  // ���Ǵ���ı��ʽ�� ���������α����ı��������������
//
//	printf("%d\n", sizeof(c));     // ������ĸ�Ĵ�С1����
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));     // �ڴ�Ĵ�Ԫ����ռ��С4����
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));   // ÿ������ռλ4���� �ܹ�10������������� ��С40����
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}