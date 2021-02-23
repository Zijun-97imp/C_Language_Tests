# include<stdio.h>
# include<string.h>
# include<stdlib.h>

// // using the loop to confirm a password
// int main()
// {
//     int ret = 0;
//     int ch = 0;
//     char password[20] = {0};
//     printf("Please insert the password:>");
//     scanf("%s" , password);
//     // getchar();     // this getchar is to transfer the '\n' - the 'entre' after insert the password

//     while ((ch=getchar()) != '\n')   // this empty while loop is to read the 'space' or 'entre' element inside the password = '\n'
//     {
//         ;
//     }

//     printf("Please confirm the password (Y/N):>");
//     ret = getchar();
//     if (ret == 'Y')
//     {
//         printf("Confirm Successful!\n");
//     }
//     else
//     {
//         printf("Cancel!\n");
//     }
//     return 0;
// }


// // char- for selceting the number print from ASCII chart - example
// int main()
// {
//     int ch = 0;
//     while ((ch = getchar()) != EOF)
//     {
//         if (ch<'0' || ch>'9')         // only printing the number character in the ACSII chart
//         continue;
//         putchar(ch);
//     }
//     return 0;
// }







// // for - loop language control
// int main()
// {
//     int i = 0;
//     // for (/*the initial value*/;/*the judgement value*/;/*the calculation process*/)
//     for (i = 1 ; i <= 10 ; i++)
//     {
//         if (i == 5)
//             continue;
//         printf("%d\n" , i);
//     }
//     return 0;
// }







// for - loop and critical settings
// int main()
// {
//     int i = 0;
//     int j = 0;
//     for (i=0,j=0;i<=10 && j<=10; ++i,j++)
//     {
//         printf("continue\n");
//     }
//     return 0;
// }


// int main()
// {
//     int x,y;
//     for (x=0,y=0;x<2 && y<5; ++x,y++)
//     {
//         printf("continue\n");
//     }
//     return 0;
// }











// // do-while loop 
// int main()
// {
//     int i = 1;
//     do
//     {
//     if (i==5)
//     continue;
//     printf("%d\n" , i);
//     i++;
//     } 
//     while (i<=10);
// return 0;
// }




// // exercise 1
// int main()
// {
//     int n = 0;
//     int i = 1;
//     int fac = 1;
//     printf("the initial number(n):>");
//     scanf("%d" , &n);
//     if (n==0 || i==1)
//     {
//         printf("the product number is 1.\n");
//     }
//     else
//     {      
//         while (i <= n)
//         {
//             fac = fac * i;
//             i++;
//         }
//         printf("the product result is:%d\n" , fac);
//     }
//     return 0;
// }





// // exercise 2
// int main()
// {
//     int i = 0;
//     int n = 0;
//     int fac = 1;
//     int sum = 0;
//     printf("the calculation number input:>");
//     scanf("%d" , &n);
//     for (i=1;i<=n;i++)
//     {
//         fac = fac * i;
//         sum = sum + fac;
//     }
//     printf("the final result for the sum of products:%d.\n" , sum);
//     return 0;
// }








// // exercise 3 - find the array / string
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 0;
//     printf("inser the number want to find:>");
//     scanf("%d" , &k);
//     // write a code, find the element '7' at the 'arr[]' array
//     int i = 0;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (i=0;i<=size;i++)
//     {
//         if (k == arr[i])
//         {
//             printf("the number we find:%d\n" , i);
//             break;     // stop finding when reach the results
//         }
//     }
//     if (i == size || i > size)
//     {
//         printf("could not find the data!\n");
//     }
//     return 0;
// }














// exercise 4
// Bi-function approaching
// int main()       // old-style approaching
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 7;
//     int i = 0;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (i=0 ; i<size ; i++)
//     {
//         if (k == arr[i])
//         {
//             printf("Find! The result is: %d\n" , i);
//             break;
//         }
//     }
//     if (i == size)
//         printf("Can't find!");
//     return 0;
// }
// --------------------------------New---------------------------------------- //
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10,11};       // the array; the database
//     int k = 0;
//     printf("the insert target number:>");
//     scanf("%d" , &k);
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int left = 0;               // left-side mark
//     int right = size-1;         // right-side mark

//     // while loop 
//     while (left <= right)
//     {
//     // this is a while loop content
//         int mid = (left + right) / 2; // the middle number
//         if (arr[mid] > k)
//     {
//         right = mid - 1;
//     }
//         else if (arr[mid] < k)
//     {
//         left = mid + 1;
//     }
//         else
//     {
//         printf("You find it! the mark is: %d\n" , mid);
//         break;
//     }
//     }
//     if (left > right)
//     {
//         printf("It's not in this array.Sorry!\n");
//     }
//     return 0;
// }












// // exercise 5
// int main()
// {
//     char arr1[] = "Welcome to this world!";
//     char arr2[] = "######################";
//     int left = 0;
//     int right = strlen(arr1)-1; // because include the mark
//     int l = 0;
//     int r = 0;

//     for (l = left, r = right; l <= r ; l++,r--)
//     {
//         arr2[l] = arr1[l];
//         arr2[r] = arr1[r];
//         system("clear");
//         printf("%s\n" , arr2);
//     }
//     return 0;
// }















// int main()
// {
//     int i = 0;
//     int j = 0;
//     char password[20] = "";
//     char setpass[20] = "";
//     printf("Please set a password:>");
//     scanf("%s" , setpass);
//     system("clear");

//     // the password trying session - key
//     for (i=0 , j=3; i<=3; i++ , --j)
//     {
//         printf("You have %d chance(s) left" , j);
//         printf("Please insert the password ():>");
//         scanf("%s" , password);
//         if (strcmp(password , setpass) == 0)
//         {
//             system("clear");
//             printf("Successful! Welcome...\n");
//             break;
//         }
//     }
//     if (i == 3)
//     {
//         system("clear");
//         printf("Your insert incorrect 3 times! Your account block!\n");
//     }
//     else
//     {
//         printf("Log in....Please wait....\n");
//     }
    
//     return 0;
// }


































