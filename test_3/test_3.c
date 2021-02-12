# include<stdio.h>
# include<string.h>


// // if - loop
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     scanf("%d%d" , &num1 , &num2);
//     if (num1 > num2)
//        printf("较大值是: %d\n" , num1);
//     else
//        printf("较大值是: %d\n" , num2);
    
//     return 0;
// }





// if -loop with input
// int main()
// {
//     int input = 0;

//     printf("join us.\n");
//     printf("do you accept the contract? (yes(1)/no(0))>: ");
//     scanf("%d" , &input);

//     if (input == 1)
//        printf("accept the contract offer.\n");
//     else
//        printf("reject the current offer.\n");

//     return 0;
// }








// while - loop
// int main()
// {
//     int line = 1;
//     printf("complete 10 times.\n");

//     while (line<=10)
//     {
//         printf("complete 10 times : %d\n" , line);
//         line++;  // line++ -- line_update = line +1;
//     }

//     printf("process complete! \n");
//     return 0;
// }







// // function definition
// // i.e. the addition method for z = x+y;
// int add(int x , int y)
// {
//     int z = x+y;
//     return z;
// }

// int max_a(int a , int b)
// {
//     int q = 0;
//     if (a>b)
//        q = 1;
//     else
//        q = 0;
//     return q;
// }

// int main()
// {
//     int sum = 0;
//     int maxa = 0;
//     int num1 = 0;
//     int num2 = 0;
//     int a = 0;
//     int b = 0;
//     printf("input num1>:\n input num2>:\n");
//     scanf("%d%d" , &num1 , &num2);
//     printf("input a>: \n input b>: \n");
//     scanf("%d%d" , &a , &b);
//     sum = add(num1 , num2);
//     maxa = max_a(a , b);
//     printf("sum_output = %d\n" , sum);
//     printf("minimum_number = %d\n" , maxa);

//     return 0;
// }





// array expression in c

int main()
{
    int arr[10] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("array_express = %d\n" , arr[0]);        // print specific element inside the array

    // using the while loop to print out a whole array
    int i = 0;
    while (i<10)
    {

          printf("%d " , arr[i]);
          i++;

    }
    return 0;

}






