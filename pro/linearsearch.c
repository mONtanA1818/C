#include <stdio.h>
//int search(int key,int a[], int length);
struct {
    int amount;
    int *name;
}coins[]={
    {1,"penny"},
    {5,"nickel"},
    {10,"dime"},
    {25,"quarter"},
    {50,"half-dollar"}
};
int main ()
{
    //int amount[]={1,5,10,25,50};
    //char *name[]={"penny","nickel","dime","quarter","half-dollar"};
    printf("请输入您需要找的美钞单词\n");
    int t;
    scanf("%d",&t);
    /*int r=search(t,amount,sizeof(amount)/sizeof(amount[0]));
    if (r>-1)
    {
        printf("%s\n",name[r]);
    }else
    {
        printf("输入格式有误");
    }*/
    for (int  i = 0; i < sizeof(coins)/sizeof(coins[0]); i++)
    {
        if (t==coins[i].amount)
        {
            printf("%s\n",coins[i].name);
            break;
        }
        
    }
    
    return 0;
}
int search(int key,int a[], int length)
{
    int ret=-1;
    for ( int i = 0; i < length; i++)
    {
        if (key==a[i])
        {
            ret=i;
            break;
        }
        
    }
    return ret;
}