
# include<stdio.h>
# include<string.h>


// // if - language
// int main()
// {
//     int age = 0;
//     printf("Please input your age>:");
//     scanf("%d\n" , &age);
//     if (age<18)
//     printf("un-adult! too young.\n");
//     else if (age>=18 && age<30)          // &&: AND relavant
//     printf("need more check!\n");
//     else
//     printf("pass!\n");
//     return 0;
// }





// // if - language setting with double criterias
// int main()              // this is an error program
// {
//     int a = 0;
//     int b = 2;
//     if (a == 1)          // if a != 1; this if-loop could not reach - output with empty
//        if (b == 2)
//           printf("1st_order check\n");
//     else
//         printf("2nd_order check\n");
//     return 0;
// }


// // if - with wrong input assignment
// int main()
// {
//     int num = 4;
//     // if (num = 5)     // due to the assignment here is not for the if-loop; 
//     // {
//     //     printf("not allow\n");    // any input will get an output as this
//     // }

//     // another type of writing
//     if (5 == num)      // to write the criteria as (value == the variable)
//     {
//         printf("not allow\n");
//     }
//     return 0;
// }




//-------------------------1
// judge for the odd number;
// int main()
// {
//     int a = 0;
//     printf("input a number (1-100)>:");
//     scanf("%d" , &a);
//     if (a%2 == 0)
//         printf("the normal number\n");
//     else
//         printf("the odd number\n");
//     return 0;
//-------------------------2
// jude for the normal number
// int main()
// {
//     int i = 1;
//     while (i<=100)
//     {
//         if (i%2 == 1)
//            printf("%d " , i);
//         i++;
//     }
// }
//-------------------------3
// judge for the normal number - while-loop
// int main()
// {
//     int a = 99;
//     while (a>=1)
//     {
//         printf("%d " , a);
//         a-=2;
//     }
//     return 0;
// }











// // switch - language

// // switch need to have a break to stop the loop
// int main()
// {
//     int day = 0;
//     printf("input of day_number>:");
//     scanf("%d\n" , &day);
//     int a = day%7;
//     switch (a)
//     {
//         case 1: printf("Monday\n");
//         case 2: printf("Tuesday\n");
//         case 3: printf("Wednesday\n");
//         case 4: printf("Thursday\n");
//         case 5: printf("Friday_last workday\n");
//         break;
//         case 6: printf("Saturday\n");
//         case 0: printf("Sunday_last weekend day\n");
//         break;
//     }
//     return 0;
// }


// // switch with wrong input
// int main()
// {
//     int day = 0;
//     printf("input of day_number (range: 1-7)>:");
//     scanf("%d\n" , &day);
//     switch (day)
//     {
//         case 1: printf("Monday\n");
//         case 2: printf("Tuesday\n");
//         case 3: printf("Wednesday\n");
//         case 4: printf("Thursday\n");
//         case 5: printf("Friday_last workday\n");
//         break;
//         case 6: printf("Saturday\n");
//         case 7: printf("Sunday_last weekend day\n");
//         break;
//         default: printf("Input with wrong number.\n");         // default: will select the number which not belong to these cases;
//         printf("exit the program...\n");
//         break;
//     }
//     return 0;
//}


// switch calculation
// int main()
// {
//      int n = 1;
//      int m = 2;
// switch (n)
// {
//     case 1:
//          m++;
//     case 2:
//          n++;
//     case 3:
//          switch (n)
//          {//switch允许嵌套使用
//              case 1:
//                  n++;
//              case 2:
//                  m++;
//                  n++;
//              break;
//          }
//     case 4:
//          m++;
//          break;
//     default:
//          break;
// }
// printf("m = %d, n = %d\n", m, n);
// return 0;
// }









// // while - with break / continue
// int main()
// {
//     int a = 0;
//     while (a<=10)
//     {
//         a++;
//         if (a == 5)
//            // break;
//            continue;
//         printf("the number ouput:%d\n" , a);
//            // a++;
//     }
          
//     return 0;
// }

// // while - for judge
// int main()
// {
//     int ch = 0;
//     while ((ch = getchar()) != EOF)
//     {
//           putchar(ch);
//           printf("%c\n" , ch);
//     }
//     return 0;
// }













