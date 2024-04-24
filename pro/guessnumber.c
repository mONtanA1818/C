#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int a=0;
    printf("欢迎来到猜数游戏\n");
    printf("我已经想好了一个1到100之间的数\n");
    do{
        printf("请猜这个1到100之间的数：");
        scanf("%d",&a);
        count++;
        if (a>number)
        {
            printf("你的数猜大了\n");
        }else if (a<number)
        {
            printf("你的数猜小了\n");
        }
    }while(a!=number);
    printf("太好了，你用了%d就猜对了答案\n",count);
    return 0;
}