#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct time* timeUpdate(struct time *now);

int main(void)
{
    struct time testTime[]={
        {11,59,59},{12,0,0},{12,0,1},{24,03,49},{00,00,00},
    };
    for (int i = 0; i < 5; i++)
    {   
        if (testTime[i].seconds<=60 && testTime[i].seconds>=0 && testTime[i].hour>=0 && testTime[i].hour<=23 && testTime[i].minutes>=0 && testTime[i].minutes<=60)
        {
            printf("This time is %02d:%02d:%02d\t",testTime[i].hour,testTime[i].minutes,testTime[i].seconds);
            testTime[i]=*timeUpdate(&testTime[i]);
            printf("The next seconds is %02d:%02d:%02d\n",testTime[i].hour,testTime[i].minutes,testTime[i].seconds);
        }
        else
        {
            printf("testTime format error\n");
        }
        
    
    }
    return 0;
}

struct time* timeUpdate(struct time *now)
{
    if (now->seconds==60)
    {
        now->seconds=0;
        ++(*now).minutes;
        if (now->minutes==60)
        {
            now->minutes=0;
            ++(*now).hour;
            if (now->hour==24)
            {
                (*now).hour=0;
                (*now).minutes=0;
                (*now).seconds=0;
            }   
        }
    }
    return now;   
}