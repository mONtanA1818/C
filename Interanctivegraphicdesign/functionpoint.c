#include <stdio.h>

int plus (int a, int b)
{
    return a+b;
}
int minus (int a, int b)
{
    return a-b;
}



void f(int i)
{
    printf("in f(), %d\n",i);
}

void g(int i)
{
    printf("in g(), %d\n",i);
}
void k(int i)
{
    printf("in k(), %d\n",i);
}
void h(int i)
{
    printf("in h(), %d\n",i);
}


void cal(int(*f)(int,int))
{
     printf("%d\n",(*f)(2,3));
}

int main(void){
    cal(plus);
    cal(minus);
    // int i = 0,num;
    // scanf("%d %d",&i,&num);
    // void (*af[])(int)={f,g,k,h};
    // if (i>=0 && i<=sizeof(af)/sizeof(af[0]))
    // {
    //     (*af[i])(num);
    // }
    // if (i==0)
    // {
    //     f(0);
    // }else
    // {
    //     g(0);
    // }
    return 0;
}

