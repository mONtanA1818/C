#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, char const* argv[])
{
    char s[]="hello";
    char *p=strchr(s,'l');
    char c=*p;
    *p=0;
    char* t=(char*)malloc(strlen(s)+1);
    printf("%lu\n",sizeof(t));
    strcpy(t,s);
    printf("%s\n",t);
    free(t);
    return 0;
}