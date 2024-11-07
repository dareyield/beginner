#include <stdio.h>
#include <math.h>
int main()
{
    double n,an,sn;
    for(n=1,an=4,sn=0; fabs(an)>=1e-6; n++)
    {
        an=4*pow(-1,n+1)/(2*n-1);
        sn+=an;
    }
    printf("%lf",sn);
    return 0;
}