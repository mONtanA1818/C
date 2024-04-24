#include "node.h"
#include <stdio.h>
#include <stdlib.h>


/*
typedef struct _node
{
    int value;
    struct _node *next;
} Node;
*/

/*typedef struct _list
{
    Node *head;
    Node *tail;
} List;*/

void add(List *plist, int number);
int main(int argc,char const *argv[])
{
    //Node *head=NULL;
    List list;
    list.head=list.tail=NULL;
    //Node *head=NULL;
    int number;
    do
    {
        scanf("%d",&number);
        if (number!=-1)
        {
            add(&list,number);
        }
    } while (number !=-1);
    print(&list);
    scanf("%d",&number);
    Node *p;
    int isFound=0;
    for (p=list.head;p;p=p->next)
    {
        if (p->value==number)
        {
            printf("找到了\n");
            isFound=1;
            break;
        }
    }
    if (!isFound)
    {
        print("没找到\n");
    }
    Node *q;
    scanf("%d",&number);
    for (q=NULL,p=list.head;p;q=p,p=p->next)
    {
        if (p->value==number)
        {
            if (q)
            {
                q->next=p->next;        
            }else
            {
                list.head=p->next;
            }
            free(p);
            print("已删除");
            break;
        }
    }

    
    print(&list);
    return 0;
}

void add(List *plist, int number)
{
    //add to link-list
    Node *p=(Node*)malloc(sizeof(Node));
    p->value=number;
    p->next=NULL;
    // find last
    Node *last=plist->head;
    if (last)
    {
        while (last->next)
        {
            last=last->next;
        }
        last->next=p;
    }else{
        plist->head=p;
    }
     
}

void print(List *plist)
{
    Node *p;
    for (p=plist->head;p;p=p->next)
    {
        printf("%d\t",p->value);
    }
    printf("\n");
}

