/*题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
输入格式:
两个整数，第一个表示n，第二个表示m。
输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
输入样例：
2 4
输出样例：
15*/
#include <stdio.h>
#include <math.h>
int isPrime(int i)
{
    int ret=1;
    int k;
    if(i==1 ||
        (i%2==0 && i!=2))
        ret=0;
    for ( k = 3; k < sqrt(i) ; k+=2){
        if (i%k==0){
            ret=0;
            break;
        }
    }
    return ret;
}
int main()
{
    int x,t=0,n,m,sum=0;
    int ret;
    printf("请输入n和m的值");
    scanf("%d %d",&n,&m);
    /*先用m得到第m个素数的值ret*/
    for(x=2;t<m;x++)
    {
        int i;
        int isPrime=1;
        for (i=2;i<x;i++)
        {
            if(x%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if (isPrime==1)
        {
            t++;
            ret=x;
        }
    }
    t=0;
    for(x=2;x<=ret;x++)
    {
        if (isPrime(x))
        {
            t++;
            if (t>=n)
            {
                if (t<=m)
                {
                    sum+=x;
                }   
            }   
        }
    }
    printf("%d",sum);
}