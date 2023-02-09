#include <stdio.h>
//#include 类似import 即是导入一个文件 stdio.h 是一个标准库
//标准输入输出库


//int 数据类型 整形若出现在函数中,表示函数返回值为 整形
//main 程序的主函数 程序有且只有一个主函数

int main1() //不写或者 void 表示主函数为空 若带参就以逗号分隔
{
    // {} 函数体 代码体 程序体
    //printf() 是 <stdio.h> 提供的
    printf("Hello, World! ");//  // \n 转义字符 换行
    // return 表示程序结束 0 表示函数返回值 要和函数返回值类型对应
    return 0;
}