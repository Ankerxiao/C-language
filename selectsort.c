//
//  main.c
//  选择排序
//
//  Created by qianfeng on 16/5/2.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a[100] = {};
    printf("请输入要待排序的序列：");
    int count = 0;//整型数组a中有多少个数
    int k;//监视哨，记录当前最小元素的下标
    int temp;//交换的中间变量
    //将用户输入的数据依次存入到数组a中
    for(int i=0;i<100;i++)
    {
        scanf("%d",&a[i]);
        count++;
        if(getchar() == '\n')
        {
            break;
        }
    }
    
    printf("数组a共有%d个元素\n",count);
    
    for(int i=0; i<count-1; i++)
    {
        //每次从待排序的数列中找出最小的
        k = i;
        for(int j=i+1;j<count;j++)
        {
            if(a[k] > a[j])
            {
                k = j;
            }
        }
        
        //把a[k]放到待排数列的最前面，交换a[k]和a[i]的位置
        if(k != i)
        {
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
    }
    
    for(int i=0;i<count;i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\n");
    return 0;
}
