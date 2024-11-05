#include <stdio.h>
#include <math.h>
int main()
{   int sxh,i=0;
    for(sxh=100; sxh<=999; sxh++)
    {
        if(pow(sxh/100,3)+pow((sxh%100)/10,3)+pow(sxh%10,3)==sxh)
        {
            printf("%4d",sxh);
            i++;
            if(i%10==0)
                printf("\n");
        }
    }
    return 0;
}