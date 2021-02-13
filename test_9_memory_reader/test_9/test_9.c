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
//	// >> -- 右移操作符
//	// 移动的是二进制的位数
//	// 例如 a = 16|10 ---> a = 1000|2
//	// b = a >> 1 ---> b = 1000 >> 1 = 100|2 ---> b = 8|10
//	// (a-space) 32bit of the system: a = 16|10 = 00000000000000000000000000001000|32bit
//	// (b-space) 32bit of the system: 00000000000000000000000000000100>|32bit = 8;
//	// 算术右移 ---》右边丢弃 左边补原符号位
//	// 逻辑右移 ---》右边丢弃 左边加0
//
//	int b = a >> 1;
//	printf("b = %d\n", b); // 算术移位 保留了原符号
//
//
//
//	int c = -16;
//	unsigned d = *(unsigned*)&c;
//	printf("d = %d\n", d >> 2); // 逻辑右移 将原算术符号位置进行替换为1
//
//	// 以上操作的原理 - 二进制的关系
//	// 整数的二进制表现有: 源码、反码、补码
//	// 储存到内存的是补码
//	// 以 a = -1 为例
//	// 源码 - 10000000000000000000000000000001
//	// 反码 - 11111111111111111111111111111110
//	// 补码 - 11111111111111111111111111111111
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
//// 按位与 按位或 按位异或
//int main()
//{
//	// 按位与 - &
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	// 3 == 00000000000000000000000000000011
//	// 5 == 00000000000000000000000000000101
//	//3&5 = 00000000000000000000000000000001
//	//3&5 = 1|10
//	printf("c = %d\n", c);
//
//	// 按位或
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
//	// 按位异或 - 安慰相同为0，相异为1
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
//	//// 统计num补码中有几个1
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//
//	//// 按位与1的统计个数
//	//// a = 00000000000000000000000000001100; - 12
//	//// 按位逐一count
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
//	printf("%d\n", sizeof(a));     // 整形表达式大小4比特
//	printf("%d\n", sizeof a);
//	/*printf("%d\n", sizeof int a);*/  // 这是错误的表达式： 涵盖了整形表述的变量必须添加括号
//
//	printf("%d\n", sizeof(c));     // 单个字母的大小1比特
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));     // 内存寄存元素所占大小4比特
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));   // 每个整形占位4比特 总共10个整形组成数组 大小40比特
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}