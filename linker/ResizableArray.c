#include "array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int BLOCK_SIZE=3;
/*
typedef struct 
{
    int size;
    int *array;
} Array;
*/

Array array_create(int init_size)
{
    Array a;
    a.size=init_size;
    a.array=(int*)malloc(sizeof(int)*a.size);
    return a;
}
void array_free(Array *a)
{
    free (a->array);
    a->size=0;
    a->array=NULL;
}
int array_size(const Array *a)
{
    return a->size;
}
int* array_at(Array *a, int index)
{
    if (index>=a->size)
    {
        array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
    }
    return &(a->array[index]);
}
int* array_get(const Array *a, int index)
{
    return (int*)a->array[index];
}
void *array_set(Array *a, int index, int value)
{
    a->array[index]=value;
}
void array_inflate(Array *a, int more_size)
{
    int *p = (int*)malloc(sizeof((int)(a->size + more_size)));
    int i;
    /*for ( i = 0; i < a->size; i++)
    {
        p[i]=a->array[i];
    }*/
    memcpy(p,a,sizeof(a->size));
    free(a->array);
    a->array=p;
    a->size+=more_size;
}
int main(int argc, char const* argv[])
{
    Array a=array_create(3);
    //printf("SIZE OF ARRAY=%d\n",array_size(&a));
    //array_set(&a,0,66);
    //printf("%d\n",array_get(&a,0));
    int number;
    number=0;
    int cnt=0;
    while (number != -1)
    {
        scanf("%d",&number);
        if (number!=-1)
        {
            printf("%p\n",array_at(&a,cnt));
            *array_at(&a,cnt++)=number;
        }
        printf("SIZE OF ARRAY=%d\n",array_size(&a));
    }
    printf("%d",array_get(&a,4));
    array_free(&a);
    return 0;
}
