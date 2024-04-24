#include <stdio.h>
void minmax(int *a, int len, int *min, int *max);
int main(void)
{
    int a[]={1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
    int max,min;
    printf("main sizeof(a)=%lu\n",sizeof(a));
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("min=%d,max=%d\n",min,max);
    int *p=&min;
    printf("*p=%d\n",*p);
}
void minmax(int *a, int len, int *min, int *max)
{
    int i;
    printf("main sizeof(a)=%lu\n",sizeof(a));
    *min=*max=a[0];
    for ( i = 1; i < len; i++)
    {
        if (a[i]<*min)
        {
            *min=a[i];
        }
        
    }
    for ( i = 1; i < len; i++)
    {
        if (a[i]>*max)
        {
            *max=a[i];
        }
        
    }
    
}