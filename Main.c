#include <stdio.h>
int main()
{   int i,j,k=0;
    for(i=2; i<=97; i++)
    {
        for(j=2; j<i; j++)//j小于i可以写为j小于等于i/2(优化减少计算量)
        {
            if(i%j==0)
                k++;//可以改成k=1，一旦存在1以外因数即赋值为1，否则为素数，赋值为0

        }
        if(k==0)
            printf("%3d",i);
        k=0;
    }
    return 0;
}
