#include <stdio.h>
#include <math.h>
int main()
{
    int mask,i,a,x;
    printf("请输入一个值");
    scanf("%d",&x);
    if (x<0)
    {
        x=-x;
        printf("fu ");
    }
    a=x;
    int cnt=0;
    do
    {
        cnt++;
        a/=10;
    } while (a>0);
    mask=pow(10,(cnt-1));
    do
    {
        int d=x/mask;
        switch (d)
        {
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        default:
            break;
        }
        if (mask>9)
        {
            printf(" ");
        }
        x%=mask;
        mask/=10;
    } while (mask>0);
}