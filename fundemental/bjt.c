#include <stdio.h>
int main()
{
    int time0,time1;
    printf("请输入当前北京时间\n");
    scanf("%d",&time0);
    if (time0-800<0)
        time0+=2400;
    time1=time0-800;
    printf("utc时间为%d",time1);
    return 0;
}