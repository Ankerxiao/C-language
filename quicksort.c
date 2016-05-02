//
//  main.c
//  快速排序
//
//  Created by qianfeng on 16/5/2.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int QuickSort(int* str,int left,int right)
{
    if(left < right)
    {
        int pivotpos = Partition(str,left,right);
        QuickSort(str, left, pivotpos - 1);
        QuickSort(str, pivotpos+1, right);
    }
    return 0;
}

int Partition(int* str, int low, int high)
{
    int c,pivot = str[low];
    int i = low;
    int j = high;
    while (i != j)
    {
        while(i<j && str[i] < pivot) i++;
        if(i<j) str[j--] = str[i];
        while(i<j && pivot < str[j]) j--;
        if(i<j) str[i++] = str[j];
    }
    str[i] = pivot;
//    while(i<j)
//    {
//        while(i<j && pivot < str[j]) j--;
//        while(i<j && str[i] < pivot) i++;
//        if(i<j)
//        {
//            c = str[i];
//            str[i] = str[j];
//            str[j] = c;
//            i++;
//            j--;
//        }
//    }
//    str[low] = str[i];
//    str[i] = pivot;
    return i;
}

int main(int argc, const char * argv[])
{
    int sort[100] = {};
    int counter = 0;
    printf("请输入序列:");
    for(int i=0;i<100;i++)
    {
        scanf("%d",&sort[i]);
        counter++;
        if(getchar() == '\n')
        {
            break;
        }
    }
    
    printf("%d \n",counter);
    QuickSort(sort, 0, counter);
    
    
    for(int i=0;i<counter;i++)
    {
        printf("%d ",sort[i]);
    }
    
    printf("\n");
    return 0;
}
