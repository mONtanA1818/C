#include <stdio.h>
#include <string.h>

size_t mylen(const char* s)
{
    int dex=0;
    while (s[dex]!='\0')
    {
        dex++;
    }
    return dex;
} 

int main (int argc,char const *argv[])
{
    char line[]="Hello";
    printf("strlen=%d\n",strlen(line));
    printf("sizeof=%d\n",sizeof(line));
    return 0;
}