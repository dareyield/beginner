#include <stdio.h>
int main()
{
    long f1=1,f2=1,f3;
    int i;
    printf("%10ld%10ld",f1,f2);
    for(i=3; i<=60; i++)
    {   f3=f1+f2;
        if(f3<=9999999999)
            printf("%10ld",f3);
        else
            printf("%10.4e",f3);//数据过大时，使用科学记数法
        if(i%10==0)//分行列数
            printf("\n");
        f1=f2;
        f2=f3;
    }
    return 0;
}