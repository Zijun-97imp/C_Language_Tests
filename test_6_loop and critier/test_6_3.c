# include<stdio.h>
# include<string.h>
# include<math.h>


// // exercise 4
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     int tmp = 0;
//     printf("Please insert the number:>");
//     scanf("%d%d%d" , &a , &b , &c);

//     // arrange the maximum to minimum
//     if (a<b)
//     {
//         int tmp = a;
//         a = b;
//         b = tmp;
//     }
//     if (a<c)
//     {
//         int tmp = a;
//         a = c;
//         c = tmp;
//     }
//     if (b<c)
//     {
//         int tmp = b;
//         b = c;
//         c = tmp;
//     }
//     printf("%d %d %d" , a , b , c);
//     return 0;
// }








// // exercise 5
// int main()
// {
//     int i = 0;
//     for(i=1;i<=100;i++)
//     {
//         if(i%3 == 0)
//         {
//             printf("the number you need: %d\n" , i);
//             continue;
//         }
//     }
//     return 0;
// }










// // exercise 6
// int main()
// {
//     int a = 0;
//     int b = 0;
//     printf("Please insert two numbers:>");
//     scanf("%d%d" , &a , &b);
//     int r = 0;

//     while (a%b)           // 如果整除：a%b = 0； while循环判断为假，循环结束；
//                           // 如果整除：a%b != 0； while循环判断为真，循环继续；将a赋值为上一循环的b，将b赋值为上一循环的余数，循环继续；直至整除余数为0.
//     {
//         r = a%b;
//         a = b;
//         b = r;
//     }
//     printf("%d\n" , b);

//     return 0;
// }









// // exercise 7
// int main()
// {
//     int year = 0;
//     int count = 0;
//     // for - loop
//     for (year = 1000; year <=2020; year++)
//     {
//         if (year%4 == 0 && year%100 != 0)
//         {
//             printf("%d\n" , year);
//             count++;
//             continue;
//         }
//         else if (year%400 == 0)
//         {
//             printf("%d\n" , year);
//             count++;
//             continue;
//         }
//     }
//     printf("the total number of the year is: %d\n" , count);
//     return 0;
// }












// // exercise 8
// int main()
// {
//     int num = 0;
//     int count = 0;
//     // for - loop
//     for (num = 100 ; num<=200 ; num++)
//     {
//         int i = 0;
//         for (i = 2; i < sqrt(num); i++)
//         {
//             if (num%i == 0)
//             {
//                 break;
//             } 
//         }
//         if (i > sqrt(num))
//         {
//             count++;
//             printf("%d " , num);
//         }
//     }
//     printf("\nthe number counted: %d\n" , count);
//     return 0;
// }











// exercise 8
int main()
{
    
    return 0;
}



































