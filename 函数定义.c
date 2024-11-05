#include <stdio.h>
void one_three(void);//声明母函数
void two(void);//声明子函数
void one_three(void)//定义母函数
{   printf("one\n");
    two();//调用子函数
    printf("three\n");
}
void two(void)//定义子函数
{
    printf("two\n");
}
int main(void)
{   printf("Start now:\n");
    one_three();//调用母函数
    printf("done!");
    return 0;
}