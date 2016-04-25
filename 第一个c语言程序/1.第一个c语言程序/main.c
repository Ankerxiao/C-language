//
//  main.c
//  1.第一个c语言程序
//
//  Created by qianfeng on 16/4/25.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

//这个是一行注释
/*这是多行注释
 多行
 */

/*
 上课笔记
 修改字体：cmd + ,
 对齐：cmd + [或者]
 注释：cmd + /
 运行：cmd + r
 */

/*
 #include 预编译指令，头文件包含
 <>:包含系统头文件
 "":包含用户头文件，如果用户头文件找不到，会到系统中去找
 */
#include <stdio.h>


/*
 c语言只有一个main函数（主函数）:程序和操作系统的接口
 main函数标准形式：int main(int argc, const char * argv[])
 main函数简洁形式：int main()

 {}:表示代码块
 代码句结束+;
 */
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("欢迎到千峰\n");
    /*
     printf:格式化输出函数
     printf(格式化字符串，参数)
     "":字符串
     %d:占位符，表示打印一个数字
     %s:占位符，表示打印一个字符串
     占位符要和参数一致
     \n:换行
     */
    
    printf("My name is %s\n","Anker");
    printf("My age is %d\n",18);
    printf("My school is %s ,build at %d-%d-%d\n","qianfeng",2000,10,10);
    return 0;
}


/*
 c语言
 编辑：.c,写代码
 预编译：.c
 编译：.o 每个文件编译成一个目标文件
 链接：把多个.o关联起来，组成一个可执行文件，.out
 执行：按.out的指令去执行
 */

