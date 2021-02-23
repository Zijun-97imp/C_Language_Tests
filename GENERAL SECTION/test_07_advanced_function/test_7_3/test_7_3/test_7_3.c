//
//  main.c
//  test_7_3
//
//  Created by mac on 06/12/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////function and recursion method
////recursion method - repeat the smae processes inside the main loop
//int my_strlen(const char* str)
//{
//    if (*str == '\0')
//        return 0;
//    else
//        return 1+my_strlen(str+1);
//}
//
//int main()
//{
//    char arr[] = "";
//    printf("Please insert a word:>\n");
//    scanf("%s" , arr);
//    int len = my_strlen(arr);
//    printf("the length of string is %d.\n" , len);
//    return 0;
//}




//// recursion example 4
//// the recursion and iteration nth step
//// calculate the n!
//// iteration is replacing the 'for' - loop
//int Func_iter(int z)
//{
//    if (z<=1)
//        return 1;
//    else
//    return z*Func_iter(z-1);        // the iteration is within the defined loop
//}
//int main()
//{
//    int n = 0;
//    int result = 0;
//    printf("Please insert the number of level:>");
//    scanf("%d" , &n);
//
//    // the iteration calculation
//    result = Func_iter(n);
//    printf("the result of nth iteration product: %d\n" , result);
//    return 0;
//}








////-------------------------------------fib_old.func-----------------------------------------//
////// the Successione di Fibonacci - using the iteration to calculate
////int count = 0;
////int Fib(int i)
////{
////    if (i==3)
////    {
////       count++;
////    }
////    if (i<=2)
////        return 1;
////    else
////        return Fib(i-1)+Fib(i-2);
////}
//
//
////-------------------------------------fib_adv.func-----------------------------------------//
//// the simple method: a+b = c --> b+c = d --> c+d = e
//// using the value marking method for different varibales of 'a' and 'b';
//int count = 0;
//int Fib(int i)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    if (i == 3)
//    {
//        count++;
//    }
//    while (i>2)         // the number of i = 1,2 are the same as 1;
//    {
//        c = a+b;
//        a = b;
//        b = c;
//        i--;
//    }
//    return c;
//}
//
////-------------------------------------main.func-----------------------------------------//
//int main()
//{
//    int n = 0;
//    int result = 0;
//    printf("Please the number in the Fibonacci:>");
//    scanf("%d" , &n);
//
//    result = Fib(n);
//    printf("the result of number is %d\n" , result);
//    printf("the total time of counting number 3 in Fibonacci is %d\n" , count);
//    return 0;
//}
























































