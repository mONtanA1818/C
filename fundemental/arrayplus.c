#include <stdio.h>
int main()
{
    int n,i;
    double sum;
    double sign=1.0;
    printf("请输入n的值");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        sum+=sign/i;
        sign=(-1*sign);
    }
    printf("结果为%f",sum);
    return 0;
}