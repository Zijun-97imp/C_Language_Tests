#include <stdio.h>


//char - character alphbetic letter in chart
//printf - print the string of content
//int - interger
//long - long size integer
//%d - print data
//%c - print character
//%f - print float
//%p - print point address
//%x - 16 code
//int main()
// {
//     char ch = 'A';
//     printf("%c\n" , ch);
//     int age = 20;
//     printf("%d\n" , age);
//     long int num = 100;
//     printf("%ld\n" , num);
//     float f = 3.14159;
//     printf("%f\n" , f);
//     double pi = 3.14159;
//     printf("%lf\n" , pi);
//     return 0;
// }




// different size of data record
//int main()
// {
//     printf("%lu\n" , sizeof(char));
//     printf("%lu\n" , sizeof(short));
//     printf("%lu\n" , sizeof(int));
//     printf("%lu\n" , sizeof(long));
//     printf("%lu\n" , sizeof(long long));
//     printf("%lu\n" , sizeof(float));
//     printf("%lu\n" , sizeof(double));
//     return 0;
// }



// int main()
// {
//     int age = 20;
//     float weight = 95.6;
//     return 0;
// }



// // global varibale against the local varial could keep together
// // local variable has higher authorise with same variable mark
// int num = 20;
// int main()
// {
//     int num = 10;
//     printf("local_num = %d\n" , num);
//     return 0;
// }



// with varibale calculation and data input
// int main()
// {
//     float num1 = 0;
//     float num2 = 0;
//     double sum = 0;
//     // with add the data function - 'scanf': the function with input data
//     scanf("%f%f" , &num1 , &num2); // '&': locating marking with targeting each data with correct variable
//     sum = num1 + num2;
//     printf("sum = %lf\n" , sum);
//     return 0;
// }


// // with external value data input
// int main()
// {
//     // broadcast a unrecognised variable
//     // input an external varibale information
//     extern int g_val;
//     printf("g_val = %d\n" , g_val);
//     return 0;
// }
