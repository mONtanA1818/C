#include <stdio.h>
int main(int argc,char const *argv[])
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    struct date today;

    today.month=07;
    today.day=31;
    today.year=2014;
    struct date day;
    day=today;
    day.year=2015;
    printf("Today's date is %i-%i-%i.\n",
        today.year,today.month,today.day);
    printf("Today's date is %i-%i-%i.\n",
        day.year,day.month,day.day);
    return 0;
}