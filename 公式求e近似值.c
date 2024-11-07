#include <stdio.h>
double f();
double f(double i)
{   double x=1,X=1;
    for(; x<=i; x++)
    {
        X*=x;
    }
    return X;
}
int main()
{   double n,an,sn;
    for(n=0,an=1,sn=0; an>=1e-5; n++)
    {
        an=1/f(n);
        sn+=an;
    }
    printf("%lf",sn);
    return 0;
}