#include <stdio.h>
int main()
{
    int x;
    printf("请输入x=");
    scanf("%d",&x);
    int t=(x>0);int q=(x==0);
    switch (t)
    {
    case 1:
        printf("%d",2*x);
        break;
    case 0:
        switch (q)
        {
        case 1:
            printf("%d",x);
            break;
        case 0:
            printf("%d",-x);
        }
    }
}