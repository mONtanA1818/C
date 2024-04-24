#include <stdio.h>
int main()
{
    printf("欢迎使用log2计算器！\n");
    while (1)
    {
    int x;
    int ret=0;
    printf("请输入您需要计算log2^x的x值\n");
    scanf("%d",&x);
    int num=x;
    while (x>1){
        x=x/2;
        ret++;
    }
    printf("log2 of %d is %d\n",num,ret);
    }
    return 0;
}