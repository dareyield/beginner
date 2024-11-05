#include <stdio.h>
int main()
{   int x=0,y,z;
    while(x<=20)//优化数据（从100到20）减少计算次数
    {
        for(y=0; y<=33; y++)
        {
            for(z=0; z<=100; z=z+3)//直接使z取3的倍数，无需增加条件z%3==0
            {   if(x+y+z==100&&5*x+3*y+z/3==100)

                    printf("%d,%d,%d\n",x,y,z);
            }

        }
        x++;
    }
    return 0;
}