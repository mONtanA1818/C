#include <stdio.h>
#include <string.h>

char *mycat(char* dest,char* src);
int main(int argc,char const* argv[])
{
    char dest[50],src[50];
    strcpy(dest,"This is destination");
    strcpy(src," This is source");
    mycat(dest,src);
    printf("The final string is |%s|",dest);
    return 0;
}
char *mycat(char* dest,char* src)
{
    char *ps=strchr(dest,'\0');
    strcpy(ps,src);
    return dest;
}