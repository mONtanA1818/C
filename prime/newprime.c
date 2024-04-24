#include<stdio.h>
int main()
{
    int n=25;
    int i;
    int prime[n];
    //打印表头
    printf("\t");
    for ( i = 1; i <n ; i++)
    {
        printf("%d\t",i);
        
    }
    printf("\n");
    //初始化数组
    for ( i = 0; i < n; i++)
    {
        prime[i]=1;
    }
    int x,t;
    for ( x = 2; x < n; x++)
    {
        if (prime[x])
        {
            for ( i=2; i*x<n; i++)
            {
                prime[i*x]=0;
            }
            
        }
        //打印素数表1/0
        printf("%d\t",x);
        for ( t = 1; t < n; t++)
        {
            printf("%d\t",prime[t]);
        }
        printf("\n");
    }
    for ( i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
}