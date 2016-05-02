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

void InsertSort(int *a,int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        //为a[i]在前面的a[0]~a[i-1]有序区间中找一个合适的位置
        for(j=i-1;j>=0;j--)
        {
            if(a[j] < a[i])
                break;
        }
        
        //如果找到合适的位置
        if(j != i-1)
        {
            int temp = a[i];
            //将比a[i]大的数据向后移
            for(k=i-1;k>j;k--)
            {
                a[k+1] = a[k];
            }
            a[k+1] = temp;//将a[i]放到正确位置上
        }
    }
}

//void InsertSort(int *a,int left,int right)
//{
//    int temp;
//    int i,j;
//    for(i=left+1;i<=right;i++)
//    {
//        if(a[i] < a[i-1])
//        {
//            temp = a[i];
//            j = i - 1;
//            do
//            {
//                a[j+1] = a[j];
//                j--;
//            }while(j>=left && temp<a[j]);
//            a[j+1] = temp;
//        }
//    }
//}

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
