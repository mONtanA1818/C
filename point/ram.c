#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    void *p=0;
    int cnt=0;
    while ((p=malloc(100*1024*1024)))
    {
        cnt++;
    }
    printf("������%d00M�Ŀռ�",cnt);
    return 0;
}