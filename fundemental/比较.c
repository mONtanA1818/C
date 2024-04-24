#include <stdio.h>
int main()
{
    while(1){
        printf("请输入需要比较的三个整数并用空格隔开\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max;
    if (a>b)
        if(a>c)
            max=a;
        else
            max=c;
    else
        if(b>c)
            max=b;
        else
            max=c;
    printf("最大的数字为%d\n",max);
    }
    
    return 0;
}