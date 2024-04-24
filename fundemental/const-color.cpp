#include <stdio.h>

const int red=0;
const int yellow=1;
const int blue=2;
int main(int argc, char const *argv[])
{

    int color=-1;
    char *colorName=NULL;
    printf("please input your number of your favourite color\n");
    scanf("%d",&color);
    switch (color)
    {
    case red:
        colorName="red";
        break;
    case yellow:
        colorName="yellow";
        break;
    case blue:
        colorName="blue";
        break;
    default:
        colorName= "error!";
        break;
    }
    printf("%s\n",colorName);
    return 0;
}