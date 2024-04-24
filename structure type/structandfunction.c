#include <stdio.h>
#include <stdbool.h>
struct date
{
    int month;
    int day;
    int year;
};

int numberOfDays(struct date d);
bool isLeap(struct date d);

int main(int argc, char const *argv[])
{
    struct date today;
    struct date tomorrow;
    printf("Please input a date belike : mm-dd-yy\n");
    scanf("%i-%i-%i",&today.month,&today.day,&today.year);
    printf("%i",numberOfDays(today));
    if (today.day != numberOfDays(today))
    {
        tomorrow.day=today.day+1;
        tomorrow.month=today.month;
        tomorrow.year=today.year;
    }
    else if (today.month==12 && today.day==31)
    {
        tomorrow.day=1;
        tomorrow.month=1;
        tomorrow.year+=1;
    }
    else
    {
        tomorrow.day=1;
        tomorrow.month=today.month+1;
        tomorrow.year=today.year;
    }
    
    printf("Today's date is %i-%i-%i\n",today.year,today.month,today.day);
    printf("Tomorrow's date is %i-%i-%i\n",tomorrow.year,tomorrow.month,tomorrow.day);
    
    
}

int numberOfDays(struct date d)
{
    int days;
    const int dayPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (d.month==2 && isLeap(d))
    {
        days=29;
    }else
    {
        days=dayPerMonth[d.month-1];
    }
    return days;
}

bool isLeap(struct date d)
{
    bool leap=false;
    if (d.year%4==0 && d.year%100 != 0)
    {
        bool leap=true;
    }
    return leap;
}
