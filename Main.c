#include <stdio.h>
int main()
{   int i,j,k=0;
    for(i=2; i<=97; i++)
    {
        for(j=2; j<i; j++)//jС��i����дΪjС�ڵ���i/2(�Ż����ټ�����)
        {
            if(i%j==0)
                k++;//���Ըĳ�k=1��һ������1������������ֵΪ1������Ϊ��������ֵΪ0

        }
        if(k==0)
            printf("%3d",i);
        k=0;
    }
    return 0;
}
