#include <stdio.h>
int main()
{   int i,j,N,mid,length,flag,BL,f[N];
    printf("how many elements does your array have:");
    scanf("%d",&N);
    printf("now put your array:");
    for(BL=0; BL<N; BL++)
    {
        scanf("%d",&f[BL]);
    }
    length=N-1;
    for(BL=0; BL<N-1; BL++)//此方式是重复地将极项放在一极，所以只要N－1次即可完成排序
    {
        for(i=0; i<=length; i++)
        {
            for(j=0,flag=0; j<=length; j++)
            {
                if(f[i]>=f[j])
                {
                    flag++;
                }
            }//在数组中找到一项大于包括自身的所有项，即当flag大于的次数=length+1总长度时
            if(flag==length+1)
            {
                mid=f[i];
                f[i]=f[length];
                f[length]=mid;
                length--;//把这一项放到最后，再在最后一项以前的所有项之间计算，即总长度length－－
            }
        }
    }
    for(BL=0; BL<N; BL++)
    {
        printf("%4d",f[BL]);
    }

    return 0;
}