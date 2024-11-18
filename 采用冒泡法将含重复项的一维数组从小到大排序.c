#include <stdio.h>
int main()
{   int i,mid,BL,N;
    printf("how many elements does your array have: ");
    scanf("%d",&N);//自定义数组大小
    int f[N];
	printf("Now put your array with blocks:");
    for(BL=0; BL<N; BL++)//自定义数组元素
    {
        scanf("%d",&f[BL]);
    }
    for(BL=0; BL<N-1; BL++)//循环N－1次的遍历（因为最后一次的交换会将最后的两个元素放到正确位置）
    {
        for(i=0; i<N-1; i++)//在每一次遍历中将其中最大项慢慢向一边推
        {
            if(f[i]>=f[i+1])
            {
                mid=f[i];
                f[i]=f[i+1];
                f[i+1]=mid;
            }
        }
    }
    for(BL=0; BL<N; BL++)//遍历并打印排序后数组
    {
        printf("%4d",f[BL]);
    }
    return 0;
}
