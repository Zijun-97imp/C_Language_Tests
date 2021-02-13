# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<math.h>


// this is the section 7 for the function and c/cpp function application;

// // define function
// int ADD(int x , int y)
// {
//     int z = 0;
//     z = x+y;
//     return z;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int sum = ADD(a , b);
//     system("clear");
//     printf("%d\n" , sum);
//     return 0;
// }







// // C-library function
// // the head file of c-function library: 
// // string copy dunction - strcpy
// // char* strcpy(char* destination , char* terminate)
// int main()
// {
//     char arr1[] = "bit";
//     char arr2[] = "#########";

//     // should include the head file: cpp-# include<ctring.h> 
//     // c-# include<string.h>
//     strcpy(arr2 , arr1);   
//     // arr1[] = "0 1 2 \0" ; arr2[20] = "########" ---> arr2(new)[] = "0 1 2 \0####"
//     printf("the array content of 2: %s\n" , arr2);   
//     return 0;
// }







// // the c-lib function
// // the 'memset' - memory setting
// // void* memset(void* ptr , int value , size_t num)
// // set the first 'num' bytes of the block of the memory pointed by 'ptr'
// int main()
// {
//     char str[] = "We must know 'memset'!";
//     // str: the terminate string; '*' replacing marks; 6-the digits of space replacing
//     memset(str , '*' , 6);     
//     // the set: "We must know 'memset'! ---> '******t know 'memset'!'
//     printf("%s\n" , str);
//     return 0;
// }









// self define function
// ret_type fun_name(paral , ...)
// {
//    statement;
// }

// // sample 1:
// int MAX(int x , int y)
// {
//     if (x<y)
//     return y;
//     else
//     return x;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     printf("please input the number:>");
//     scanf("%d%d" , &a , &b);

//     int max = MAX(a , b);
//     printf("the maximum number = %d\n" , max);
//     return 0;
// }



// // sample 2
// // the void self-define function don't need the return variable


// // in the self define function includes 'formal parameter'
// void Swap(int* px , int* py)    // 利用指针函数来将主程序部分的变量进行引导
// {
//     int z = 0;
//     z = *px;
//     *px = *py;
//     *py = z;
// }

// // in the main function includes the 'real parameter'
// int main()
// {
//     int a = 0;
//     int b = 0;
//     printf("please insert number_a:>\n");
//     scanf("%d", &a);
//     printf("Please insert number_b:>\n");
//     scanf("%d", &b);
//     system("clear");
//     Swap(&a, &b);         // 利用指针函数来确定变量所在的内存
//     printf("the exchange two numbers a=%d b=%d\n", a , b);
//     return 0;
// }








// // exercise 1

// int CRI(int x)
// {
//     int m = 0;
//     for(int i = 2; i < x; i++)
//     {
//         if (x%i == 0)
//         {
//             m++;
//         }
//     }
//     if (m == 0)
//     {
//         printf("the number is Prime number\n");
//     }
//     else
//     {
//         printf("the number is not Prime number\n");
//     }
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     printf("please insert a number:>");
//     scanf("%d" , &a);
//     printf("%d",CRI(a));
//     return 0;
// }






// exercise 2
// int YEAR(int yyyy)
// {
//     if (yyyy%4 == 0 && yyyy%100 == 0)
//     {
//         printf("the leap year\n");
//     }
//     else if (yyyy%400 == 0)
//     {
//         printf("not the leap year\n");
//     }
//     else
//     {
//         printf("not the leap year\n");
//     }
//     return 0;
// }

// // leaner type!
// int YEAR(int yyyy)
// {
//     if ((yyyy%4==0 && yyyy%100!=0) || yyyy%400==0)
//     {
//         printf("the leap year\n");
//     }
//     else
//     {
//         printf("not the leap year\n");
//     }
//     return 0;
// }
// int main()
// {
//     int y = 0;
//     printf("Please insert a year:>");
//     scanf("%d" , &y);
//     system("clear");  
//     char arr = YEAR(y);
//     printf("%c" , arr);
//     return 0;
// }
























































