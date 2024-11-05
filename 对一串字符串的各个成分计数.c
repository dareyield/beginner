#include<stdio.h>
#include<ctype.h>
int main()
{
    int letters=0,blocks=0,nums=0,others=0,i;
    char str[100];//定义str字符串的最大长度。
    fgets(str,sizeof(str),stdin);
    for(i=0; str[i]!='\0'; i++)//i从字符串的第一个字符开始读取并执行指令，最终读取到字符串的最后一个非打印字符休止符停止。
    {                          //str【】的意思是读取字符串中第几个字符（与scanf不同这个可以读空格及之后的字符）【自己的解释】
        if(isalpha(str[i]))
            letters++;
        else if(isspace(str[i]))
            blocks++;
        else if(isdigit(str[i]))
            nums++;
        else
            others++;
    }
    printf("字母数：%d\n",letters);
    printf("空格数：%d\n",blocks);
    printf("数字数：%d\n",nums);
    printf("其他数：%d\n",others);
    return 0;
}