# include<stdio.h>
# include<string.h>

// // define specific function
// // select the maximum number
// int MAX(int x , int y)
// {
//     if (x>y)
//        return x;
//     else
//        return y;
// }
// int main()
// {
//     int num1 = 0;
//     int num2 = 0;
//     printf("insert the number1>:\n");
//     printf("insert the number2>:\n");
//     scanf("%d%d" , &num1 , &num2);
//     int max = 0;
//     max = MAX(num1 , num2);
//     printf("the maximum number = %d.\n" , max);
//     return 0;
// }






// // the size of element - 'sizeof'
// int main()
// {
//     int a = 10;
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printf("%d\n" , sizeof(a));      // size of 'int a' - integer constant = 4bits
//     printf("%d\n" , sizeof(int));    // size of 'int' - integer = 4bits
//     printf("%d\n" , sizeof a);       // can direct after constant variable
//     // printf("%d\n" , sizeof int);  // error of presenting 'int' directly without brackets
//     printf("%d\n" , sizeof(arr));    // size of array - 6 elements in the array as integers = 4bit*6 = 24bits

//     printf("number_of_element = %d.\n" , sizeof(arr)/sizeof(arr[0])); // sizeof(arr[0]): the size of the first element in array
//     return 0;
// }






// // binary calculation - opposite decision ~
// int main()
// {
//     int a = 32; // +32|10 = +10000|2  ------- ~(+10000|2) = -11111|2 = -33|10
//     int b = ~a;
//     printf("%d\n" , b);
//     return 0;
// }




// // for fast visit
// int main()
// {
//     register int a = 10; // fast visit path - using the register in computer
//     return 0;
// }

// // type define - typedef
// typedef unsigned int unit_32;   // 'unit_32': it is a name of type define

// int main()
// {
//     unsigned int num = 20;
//     unit_32 num2 = 20;
//     printf("size of data: %lu %lu\n" , sizeof(num) , sizeof(num2));
//     return 0;
// }






// test function

void test()
{
    static int a = 1;    // this is the static local constant
    a++;
    printf("a = %d\n" , a);
}

int main()
{
    int i = 0;
    while (i<5)
    {
        test ();
        i++;
    }
    return 0;
}


















