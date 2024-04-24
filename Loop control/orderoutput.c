#include <stdio.h>
#include <math.h>
int main()
{
    int mask,x,i,a;
    printf("请输入您需要分解的整数\n");
    scanf("%d",&x);
    a=x;
    int cnt=0;
    do
    {
        cnt++;
        x/=10;
    } while (x>0);
    mask=pow(10,(cnt-1));
    x=a;
    do
    {
        int d=x/mask;
        printf("%d",d);
        if (mask>9)
        {
            printf(" ");
        }
        x%=mask;
        mask/=10;
    } while (mask>0);
}

