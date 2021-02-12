#include<stdlib.h>
#include<string.h>


// exercise 3 detail analysis
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};       //预设的数组 array包含了10个元素
    int k = 0;                                //预设的心目数字数字k （k暂且视为包含内容）
    printf("the insert target number:>");
    scanf("%d" , &k);
    int size = sizeof(arr) / sizeof(arr[0]);  //算出数组大小：元素的多少
    int left = 0;                             //将初始元素的下标记为0
    int right = size-1;                       //将最后一个元素的下标记为（元素数量-1）

    // while loop 
    while (left <= right)                     //二分法判断：右侧元素是否反向小于左侧元素
    {
    // this is a while loop content
        int mid = (left + right) / 2;         //求出中间元素大小
        if (arr[mid] > k)
    {
        right = mid - 1;
    }
        else if (arr[mid] < k)
    {
        left = mid + 1;
    }
        else
    {
        printf("You find it! the mark is: %d\n" , mid);
        break;
    }
    }
    return 0;
}