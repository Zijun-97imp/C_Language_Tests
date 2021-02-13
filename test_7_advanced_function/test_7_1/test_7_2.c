#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

#include "add.h"

// function and the source of function
int main()
{
    int a = 0;
    int b = 0;
    printf("please insert the number a:>");
    printf("please insert the number b:>");
    scanf("%d%d" , &a , &b);

    int sum = ADD(a,b);
    printf("the sum of the calculation: %d\n" , sum);
    return 0;
}