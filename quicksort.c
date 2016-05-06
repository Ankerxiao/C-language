//
//  main.c
//  快速排序
//
//  Created by qianfeng on 16/5/2.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void swap(int array[],int i,int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int partition(int array[],int low,int high)
{
    int pv = array[low];
    
    while(low<high)
    {
        while((low<high)&&(array[high]>=pv))
        {
            high--;
        }
        swap(array,low,high);
        
        while((low<high)&&(array[low]<=pv))
        {
            low++;
        }
        swap(array,high,low);
    }
    
    //array[low] = pv;
    return low;
}

void quickSort(int array[],int low,int high)
{
    if(low<high)
    {
        int pivot = partition(array, low, high);
        QSort(array,low,pivot-1);
        QSort(array, pivot+1, high);
    }
}

