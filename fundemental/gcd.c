#include<stdio.h>
int main()
{
    int a,b,min;
    int ret,i;
    printf("请输入a和b的值并用空格隔开");
    scanf("%d %d",&a,&b);
    if (a<b){
        min=a;
    }
    else{
        min=b;
    }
    for (i = 1; i <min; i++)
    {
        if (a%i==0)
        {
            if (b%i==0)
            {
                ret=i;
            }
        }
    }
    printf("%d和%d的最大公约数为%d",a,b,ret);
}