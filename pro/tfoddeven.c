#include <stdio.h>
#include <math.h>
int main()
{
    int num=0,count=0,r=0,j,t;
    printf("请输入需要数字特征值的一个数");
    scanf("%d",&num);
    while(num>0)
    {
        j=num%10;
        count++;
        num/=10;
        if (j%2==0)
        {
            if(count%2==0)
            {
                t=1;
            }
            else
            {
                t=0;
            }
        }
        else
        {
            if (count%2==0)
            {
                t=0;
            }
            else
            {
                t=1;
            }   
        }
        r=r+pow(2,(count-1))*t;
    }
    printf("%d",r);
    return 0;
}