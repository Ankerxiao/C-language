//
//  main.c
//  bubblesort
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
    int temp;//交换的中间变量
    
    //将用户输入的数据依次存入到数组a中，并统计a中的元素个数
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
    
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<count;i++)
    {
        printf("%d ",a[i]);
    }
    
    printf("\n");
    return 0;
}
