//
//  main.c
//  test_8_2
//
//  Created by mac on 06/12/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//// re-arrange the element inside the array system
//// make an increase tendency of array
//void bubble_sort(int arr[] , int size)               // no need any return
//{
//    int i = 0;
//    int count = 0;
//    int calcu = 0;
//
//
//    // the loop number of bubble_sort calculation (total = num_size-1)
//    for (i = 0; i < size-1; i++)
//    {
//        // make a guess that it is in order
//        int flag = 1;
//        // comparing the number in each bubble loop
//        int j = 0;
//        for (j = 0; j < size-1-i; j++)
//        {
//            // comparing the closed number
//            if (arr[j] > arr[j+1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//                flag = 0;        /// the array element is not ordered completely!
//                count++;
//            }
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//        calcu++;
//    }
//
//
//    printf("the times of unorder calculation: %d\n" , count);
//    printf("the times of order calculation: %d\n" , calcu);
//}
//
//
//int main()
//{
//    int arr[] = {0,9,7,8,21,45,6,8,1,3};
//    // new_func: 'Bubble_sort' to reorder the array element
//    int m = 0;
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    bubble_sort(arr , size);
//    for (m = 0; m < size; m++)
//    {
//        printf("%d " , arr[m]);
//    }
//    return 0;
//}




//// the address of first element in array
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7};
//    // these are all recieving the address information from memory
//    printf("%p\n" , arr);
//    printf("%p\n" , &arr[0]);
//    printf("%p\n" , &arr);
//    // sizeof(array_name) = the size in the disk; unit:bite(s)
//    // &array_name = stand for the whole array, point out the array address in disk memory
//
//    int size = sizeof(arr) / sizeof(arr[0]);
//    printf("%d\n" , size);
////    printf("%p\n" , arr);
////    printf("%p\n" , &arr);
////    printf("%d\n" , *arr);  ///the address of the initial array element
//    return 0;
//}




























