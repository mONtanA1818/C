#include <stdio.h>
int main()
{
    printf("请输入一个需要倒序输出的正三位数：");
    int num;
    scanf("%d",&num);
    int a,b,c;
    a=num/100;
    c=num%10;
    b=(num-a*100-c)/10;
    int num1=c*100+b*10+a;
    printf("倒序输出为:%d",num1);
    return 0;
}