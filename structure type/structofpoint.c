#include <stdio.h>

struct point* getStruct(struct point *p);
void output(struct point p);
struct point
{
    int x;
    int y;
};

int main()
{
    struct point y={0,0};
    printf("struct point y={%d,%d}\n",y.x,y.y);
    getStruct(&y);
    output(y);
    y=(struct point){1,2};
    output(y);
}

struct point* getStruct(struct point *p)
{
    printf("The value of x is:");
    scanf("%i",&p->x);
    printf("The value of y is:");
    scanf("%i",&p->y);
    //printf("struct point p={%d,%d}\n",p->x,p->y);
    return p;
}

void output(struct point p)
{
    printf("struct point y={%d,%d}\n",p.x,p.y);
}