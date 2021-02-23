# include<stdio.h>
# include<string.h>

// global value and local value
// local value include in the sub-routine will decide local value
// int global = 2019;
// int main()
// {
//     int local = 2018;
//     int global = 2020;
//     printf("global = %d\n" , global);

//     return 0;
// }





// // constant value input - constant variable property
// int main()
// {
//     // 3;
//     // 100;
//     // 3.14; // all the confirm constant number without variable locate
//     // const int num = 4; // constant number property
//     // printf("num = %d\n" , num);
//     // int num = 8;
//     // printf("num = %d\n" , num);

//     const int n = 10; // 'n' will not be changed while confirm as the constant value 
//     int array[n] = {0};
//     return 0;
// }







// // '#define' - constant
// #define MAX 10 // define a constant number for MAX here
// int main()
// {
//     int arr[MAX] = {0};
//     printf("array = %d\n" , arr);
//     printf("const = %d\n" , MAX);
//     return 0;
// }







// listing the constant value inside subroutine
// listing command - enum

// enum Sex
// {
//     MALE,
//     FEMALE,
//     SECRETE
// };
// int main()
// {
//     //enum Sex s = FEMALE;
//     printf("%d\n" , MALE);
//     printf("%d\n" , FEMALE); // define the constant in listing is constant value
//     printf("%d\n" , SECRETE); // these are the listing elements constant
//     return 0;
// }

// enum Color
// {
//     BLUE,
//     RED,
//     PURPLE,
//     GREEN
// };
// int main()
// {
//     printf("const_color = %d\n" , BLUE);
//     printf("const_color = %d\n" , RED);
//     printf("const_color = %d\n" , PURPLE);
//     printf("const_color = %d\n" , GREEN);
//     return 0;
// }










// string constant input
// int main()
// {
//     char arr1[] = "abc";    // "abc" = 'a' , 'b' , 'c' , '\0'; '\0' = 0 the same as the stop mark of string printing
//     char arr2[] = {'a' , 'b' , 'c' , 0};
//     printf("%s\n" , arr1);
//     printf("%s\n" , arr2);
//     return 0;
// }

// string length of different arr
// int main()
// {
//     char arr1[] = "abc"; 
//     char arr2[] = {'a' , 'b' , 'c'};
//     char arr3[] = {'a' , 'b' , 'c' , '\0'};
//     printf("string_length1 = %lu\n" , strlen(arr1));
//     printf("string_length2 = %lu\n" , strlen(arr2));
//     printf("string_length3 = %lu\n" , strlen(arr3));
//     return 0;
// }

// // string with code inside
// int main()
// {
//     printf("how are you \?\n");
//     printf("c:\\test\\32\\test.c\n");
//     printf("%c\n" , 'b');
//     printf("%s\n" , "\"");      // %s -- the string input
//     printf("%c\n" , '\"');      // %c -- the character input
//     return 0;
// }

// string length of complex char
// ASCII -- checking chart
// int main()
// {
//     char arr1[] = "c:\test\32\test.c";
//     char arr2[] = "c:\\test\\32\\test.c\n";
//     printf("%lu\n" , strlen(arr1));
//     printf("%lu\n" , strlen(arr2));

//     // '132' is an octal checking number, which equal to 'Z';
//     // '32' equals to 'right arrow';
//     // 'x61' quals to '61-Hexadecimal' = 6*16^1+1*16^0
//     printf("%c\n" , '\132');   // in ASCII checking chart, that this string would not be output anything
//     printf("%c\n" , '\x61');
//     return 0;
// }
















