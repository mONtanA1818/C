#include <stdio.h>
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,-1};
    int *p=&a[0];
    while (*p!=-1)
    {
        printf("%d\t",*p++);
    }
    printf("\n");
    char ai[]={0,1,2,3,4,5,6,7,8,-1};
    char *q=ai;
    while (*q!=-1)
    {
        printf("%d\t",*q++);
    }
    
    return 0;
}