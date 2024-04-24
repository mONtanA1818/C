#include <stdio.h>
int main()
{
    while(1){
        printf("\n请输入一个需要逆序输出的正整数");
        int ret=0,x=0,digital=0;
        scanf("%d",&x);
            while (x>0){
                digital=x%10;
                ret=ret*10+digital;
                x/=10;
                printf("%d",digital);
            }
    }
    return 0;
}