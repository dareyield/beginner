#include <stdio.h>

int main()
{   int num,i=0;
    for(num=69; num<=960; num++)
    {
        if
        (num/100+(num%100)/10+(num%10)==15)
        {   printf("%4d",num);//牢记if后可且只能用｛｝来同时执行多个命令
            i++;
            if(i%10==0)
                printf("\n");
        }
    }
    return 0;
}