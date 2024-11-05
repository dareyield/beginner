#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    if(a>=b)
        c=b,d=a;
    else
        c=a,d=b;
    while(a%c!=0||b%c!=0)//使用非来筛选与时应选择或 人话：每一项都不满足否命题时，满足该命题
    {
        c--;
    }
    while(d%a!=0||d%b!=0)
    {
        d++;
    }
    printf("最大公约数：%d\n最小公倍数：%d",c,d);
    return 0;
}