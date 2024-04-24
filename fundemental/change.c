#include<stdio.h>
int main()
{
    int amount=0;
    int price=0;
    printf("当前金额合计（元）:");
    scanf("%d",&price);
    printf("请输入票面（元）：");
    scanf("%d",&amount);
    int change=amount-price; 
    if (amount>price){
        printf("应该找您找您%d元\n",change);
    }else{
        printf("抱歉！您的金额不足");
    }
    return 0;
}
