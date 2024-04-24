#include <stdio.h>
void sum(int begin, int end);//函数的原型声明
int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);
    return 0;
}
void sum(int begin, int end)//函数的定义
{
    int i;
    int sum=0;
    for ( i = begin; i <= end; i++)
    {
        sum=+i;
    }
    printf("从%d到%d依次相加的和为%d\n",begin,end,sum);
}