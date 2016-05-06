//
//  main.c
//  直接插入排序
//
//  Created by qianfeng on 16/5/2.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#include <stdio.h>

/*
 基本思想：每次将一个待排序的记录，按其关键字大小插入到前面已经排好序的子序列中的适当位置，直到全部记录插入完成为止。
 
 设数组为a[n],数据元素a[0]~a[n-1]
 1.初始时，a[0]自成1个有序区，无序区为a[1]~a[n-1]。令i=1
 2.将a[i]并入当前的有序区a[0]~a[i-1]中形成a[0]~a[i]的有序区间。
 3.i++并重复第二步直到i==n-1。排序完成。
 */

void insertSort(int *a,int n)
{
    int i = 0;
    int j = 0;
    int k = -1;
    int temp = -1;
    
    for(i=1;i<n;i++)
    {
        k = i; //待插入位置
        temp = *(a+k);
        
        for(j=i-1;(j>=0)&&(*(a+j)>temp);j--)
        {
            *(a+j+1) = *(a+j);//元素后移
            k = j; //k需要插入的位置
        }
        *(a+k) = temp;
    }
}

void binaryInsertSort(int *a,int n)
{
    int temp,k;
    int low,high,middle;
    
    for(int i=1;i<n;i++)
    {
        k = i;
        temp = *(a+k);//元素拿出来，空出位置
        
        if(*(a+i-1) > temp)//发生逆序才插入
        {
            
            low = 1;
            high = i-1;
            while(low <= high)
            {
                middle = (low+high)/2;
                if(temp<*(a+middle))
                {
                    high = middle-1;
                }
                else
                {
                    low = middle+1;
                }
            }
            
            for(int j=i-1;j>=low;j--)  //low == high - 1;元素后移
            {
                *(a+j+1) = *(a+j);
                k = j;
            }
            *(a+k) = temp;
        }
    }
}

int main(int argc, const char * argv[])
{
    int a[10] = {1,10,11,8,4,5,4,1,8,9};
    InsertSort(a,10);
    //InsertSort(a, 0, 9);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
