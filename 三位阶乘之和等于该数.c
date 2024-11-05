#include <stdio.h>
int cheng();   //long f();
int cheng(d)   //long f(int m);
{   int D=d;   //{long i=0,t=1;
    while(d>1) //while(++i<=m)t*=i;
    {   d--;   //return t;}     答案更简洁些，函数外long的定函数值，函数内的int定输入值
        D=D*d;
    }
    return D;
}
int main()
{   int jie,i;
    for(jie=100; jie<=999; jie++)
    {
        if(cheng(jie/100)+cheng((jie%100)/10)+cheng(jie%10)==jie)
        {   printf("%4d",jie);
            i++;
            if(i%7==0)
                printf("\n");
        }

    }
    return 0;
}