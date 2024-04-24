#include <stdio.h>
int main(int argc,char const *argv[])
{
    int num;
    int i1=scanf("%i",&num);
    int i2=printf("%d\n",num);
    printf("%d:%d\n",i1,i2);
    // printf("%dty%n\n",12345,&num);
    // printf("%d",num);
    // printf("%hhd\n",(char)12345);
    // printf("%*d\n",6,123);
    // printf("%09d\n",123);
    // printf("%-9d\n",123);
    // printf("%09.2f\n",123.2);
    return 0;
}