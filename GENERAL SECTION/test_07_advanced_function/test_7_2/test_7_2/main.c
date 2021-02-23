//
//  main.c
//  test_7_2
//
//  Created by mac on 05/12/2020.
//


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//#include "add.h"
//
//// function and the source of function
//int main()
//{
//    int a = 0;
//    int b = 0;
//    printf("please insert the number a:>");
//    scanf("%d" , &a);
//    printf("please insert the number b:>");
//    scanf("%d" , &b);
//
//    int sum = ADD(a,b);
//    printf("the sum of the calculation: %d\n" , sum);
//    return 0;
//}





// recursion function and method for recurse
//the infinity string output
//int main()        // this is an error loop
//{
//    printf("hello world!\n");
//    main();
//    return 0;
//}

// recursion example 1
//void print(int n)           //unreturn main function
//{
//    if(n>9)                 //the number has 2-digit at least
//    {
//        print(n/10);        //the modulus number for 4-digit then decrease the digit by          calculations
//    }
//    printf("%d " , n%10);
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%d" , &num);      //i.e. the insert number is: 1234
//
//    // using the num%num method to gain the last digit
//    print(num);
//    return 0;
//}



// recursion example 2
// count the bite of string - string length
// basic frame: my_strlen("bit") --> 1+my_strlen("it") --> 2+my_strlen("t") --> 3+my_strlen("")
int s_strlen(const char* str)
{
    if (*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1+s_strlen(str+1);
    }
}
int main()
{
    char arr[] = "bit";
    int len = s_strlen(arr);
    
    printf("the length of the string is %d\n" , len);
    return 0;
}




























