#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    printf("输入一个奇数：");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        for(j=1; j<=abs((n+1)/2-i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*((n+1)/2-abs(i-(n+1)/2))-1; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}