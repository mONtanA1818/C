#include <stdio.h>
int main()
{
    int a,b,t,ret;
    printf("请输入a和b的值并用空格隔开");
    scanf("%d %d",&a,&b);
    if (b=0){
        ret=a;
    }else{
        do{
            t=a%b;
            a=b;
            b=t;
        } while (b!=0);
        ret=a;
    }
    printf("结果为%d",a);
    return 0;
}