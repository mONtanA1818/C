#include <stdio.h>
#include <stdbool.h>


 enum COLOR{RED,YELLOW,GREEN,NumCOLORS};

 int main(int argc,char const *argv[])
 {
    int color=-1;
    char *ColorName[NumCOLORS]={
        "red","yellow","green",
    };
    char *colorName=NULL;
    printf("please input your number of your favourite color\n");
    scanf("%d",&color);
    if (color>=0 && color<NumCOLORS)
    {
        colorName=ColorName[color];
    }else{
        colorName="unkown";
    }
    printf("%s",colorName);
    return 0;
 }