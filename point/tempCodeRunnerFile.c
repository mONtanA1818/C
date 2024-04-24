#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int number;
    int i;
    int *a;
    printf("请输入数量");
    scanf("%d",&number);
    a=(int*)malloc(number*sizeof(int));
    for ( i = 0; i < number; i++)