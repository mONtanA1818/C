#include <stdio.h>
#include <string.h>
void f();
int main(int argc,char const *argv[])
{
    char line[]="Hello";
    printf("strlen=%lu\n",strlen(line));
    printf("sizeof=%lu\n",sizeof(line));
    f();
}
void f()
{
    char word[8];
    char word2[8];
    scanf("%7s",word);
    scanf("%7s",word2);
    printf("%lu##%lu##\n",strlen(word),strlen(word2));
}