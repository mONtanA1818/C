#include <stdio.h>
#include <string.h>

char* mycpy(char* dst,const char* src);
int main(int argc, char const* argv[])
{
     char s1[]="1";
     char s2[]="c programm is krz";
     mycpy(s1,s2);
     putchar(s2[3]);
     printf("s1=%s\n",s1);
     return 0;
}

char* mycpy(char* dst,const char* src)
{
     //数组版本

     /*int dex=0;
     while (src[dex]!='\0')
     {
          dst[dex]=src[dex];
          dex++;
     }
     dst[dex]='\0';
     return dst;*/

     //指针版本
     char *ret=dst;
     while (*dst++=*src++);
     return ret;
}