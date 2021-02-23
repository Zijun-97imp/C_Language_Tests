# define _CTR_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>

// int main()
// {
//     int a = 10;
//     int* p = &a;     //节引用-间接访问操作符；
//     printf("%p\n" , &a);
//     *p = 20;
//     printf("%d\n" , a);
//     return 0;
// }

// int main()
// {
//     double pi = 3.14;
//     double* ppi = &pi;
//     *ppi = 5.5;
//     printf("%f\n" , pi);
//     printf("%d\n" , sizeof(ppi));    // if 32-bit: 4bits; 64-bit: 8bits;
//     return 0;
// }








// // data structure & find the data inside the 'struct'
// struct Book
// {
//     char name[20];         //sub-type settings
//     short price;
// };            // the structure of presenting

// int main()
// {
//     // find data inside the struct
//     struct Book b1 = {"C++ Programming" , 55};     // i.e.: struct array_name subtype = {1st_type , 2nd_type ,..., nth_type}
//     printf("Book name: %s\n" , b1.name);
//     printf("Price: %d\n" , b1.price);



//     // if want to change the data inside the 'struct' - string copy
//     strcpy(b1.name , "C# Programming");
//     // the constant data inside could change directly, because it is a variable

//     // find data through the disk memory locate
//     struct Book *pb = &b1;         // point type + '*'new_variable = '&'location
//     printf("Book_name: %s\nPrice: %d\n" , (*pb).name , (*pb).price);


//     // find data using the arrow to point out
//     // (* ).():结构体变量.成员     ()->():结构体指针->成员
//     printf("Book_name: %s\nPrice: %d\n" , pb->name , pb->price);
//     return 0;
// }




