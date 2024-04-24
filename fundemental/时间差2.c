#include <stdio.h>
int main()
{
    printf("输入两次的时间（小时） （分钟）中间请\
用空格隔开\n并且第一次的时间大于第二次的时间\n");
    int hour1,hour2,min1,min2;
    scanf("%d %d",&hour1,&min1);
    scanf("%d %d",&hour2,&min2);
    int ih,im;
    ih=hour1-hour2;
    im=min1-min2;
    if (im<0){
        im+=60;
        ih--;
    }
    printf("时间差为%d小时%d分钟",ih,im);
    return 0;
}