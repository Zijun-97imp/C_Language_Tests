//
//  test_8_1.c
//  test_8_array&string
//
//  Created by mac on 06/12/2020.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// string and array: 'char' includes the same type of element inside;

//// example 1
//// put integer inside the array;
////int arr[10];                         // variable_type variable_name[array_size]
////char arr2[25];
//// !!!!array_size shoudle be the constant number, not the constant variable;!!!!
//// incomplete initialise
////    int arr[3] = {1,2,3};
////
////    char arr2[3] = {'a' , 'b' , 'c'};
//int main()
//{
////    // count the complete array
////    // the left digit will display as '0'
////    int arr[10] = {1,2,3,4,5};
////    int loop = 0;
////    for (loop=0 ; loop<10 ; loop++)
////    {
////        printf("%d " , arr[loop]);
////    }
//    // difference of length or the size of array
//    char arr[] = "abcdef";
//    int size = (int)sizeof(arr);       // the size of this array in space
//    int len = (int)strlen(arr);        // the string length pf array: stop at '\0'
//    printf("%d\n" , size);
//    printf("%d\n" , len);
//    return 0;
//}




//// example 2
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = {'a' , 'b' , 'c'};
//    printf("%lu\n" , sizeof(arr1));
//    printf("%lu\n" , strlen(arr1));
//    printf("%lu\n" , sizeof(arr2));
//    printf("%lu\n" , strlen(arr2));       // string length will stop at '\0'; there is no '\0'in the string arr2. So the value output here is random;
//
//    return 0;
//}



//// example 3
//int main()
//{
//    char arr[] = "abcdef";
//////    printf("%c\n" , arr[3]);
////    int i = 0;
////    for (i = 0; i < sizeof(arr); i++)
////    {
////        if (i%2 != 0)
////            printf("%c" , arr[i]);
////        else
////            printf("%c " , arr[i]);
////
////    }
//
//
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c\n" , arr[i]);
//    }
//    return 0;
//}




//// example 4
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,0};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//
//    // using the position locates function to print out results
//    for (i = 0; i < sz; i++)
//    {
//    //  printf("&locate[data_display] = %position , number of locate , Base64 memory insert);
//        printf("&arr[%d] = %p\n" , i , &arr[i]);
//    }
//    return 0;
//}





//// example 5
//// 2D array setting
//int main()
//{
////    int arr[3][4];
////    char ch[5][6];
////    double fl[7][8];
//    int arr[3][4] = {{1,2,3},{},{4,5}};
//    int i = 0;
//    int j = 0;
//    for (i = 0 ; i < 3 ; i++)
//    {
//        for (j = 0; j < 4 ; j++)
//        {
//            printf("%d " , arr[i][j]);
//        }
//        printf("\n");             // seperate different row of matrix
//    }
//
//    return 0;
//}



//int main()
//{
//    
////    int arr[3][4] = {{1,2,3,4},{5,6,7,8}};
////    int arr2[][4] = {{1,2,3,4},{5,6,7,8}}; // miss the colum is ok;
////    int arr3[3][] = {{1,2,3,4},{5,6,7,8}}; // miss the row is not-ok;
//    int A[5][6] = {{4,7,6,8},{6,9,0,1},{3,2,1,1,3},{5,0,9,1,3},{4,5,6,7,8}};
//    int i = 0; //column
//    int j = 0; //row
//    // the matrix A output
//    for (i = 0; i < 4 ; i++)
//    {
//        for (j = 0 ; j < 6 ; j++)
//        {
//            printf("%d " , A[i][j]);
//        }
//        printf("\n");
//    }
//    
//    // the details of each element
//    // the position for arranging each element is in order
//    for (i = 0; i < 4 ; i++)
//    {
//        for (j = 0 ; j < 6 ; j++)
//        {
//            printf("&A[%d][%d]=%p\n" , i , j , &A[i][j]);
//        }
//    }
//    return 0;
//}
















































