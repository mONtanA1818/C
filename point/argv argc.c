#include <stdio.h>
int main (int argc,char const *argv[])
{
    int i;
    for ( i = 0; i < argc; i++)
    {
        printf("%d:%s",i,argv[i]);
    }
    return 0;
}