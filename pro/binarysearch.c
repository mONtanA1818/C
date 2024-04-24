#include <stdio.h>
int search(int key,int b[],int len);
int max(int a[],int len);
int main(){
    int amount[]={1,10,5,50,25,55,56,45};
    int len=sizeof(amount)/sizeof(amount[0]);
    //重新排序
    for (int i = 0; i < sizeof(amount)/sizeof(amount[0]); i++)
    {
        int maxid=max(amount,len);
        int t;
        t=amount[len-1];
        amount[len-1]=amount[maxid];
        amount[maxid]=t;
        len-=1;
    }
    for (int i = 0; i < sizeof(amount)/sizeof(amount[0]); i++)
    {
        printf("%d ",amount[i]);
    }
    printf("\n");
    int k;
    printf("请输入您需要寻找的数字");
    scanf("%d",&k);
    int r=search(k,amount,sizeof(amount)/sizeof(amount[0]));
    if (r!=-1)
    {
        printf("您输入的%d在第%d位",k,r);
    }else
    {
        printf("您输入的数字不存在");
    }
        
    return 0;
}
int search(int key,int b[],int len)
{
    int left=0;
    int mid;
    int right=len-1;
    int ret=-1;
    while (left<=right)
    {
        mid=(left+right)/2;
        if (b[mid]==key)
        {
            ret=mid+1;
            break;
        }else if (b[mid]>key)
        {
            right=mid-1;
        }else
        {
            left=mid+1;
        }   
    }
    return ret;

}
int max(int a[],int len)
{
    int maxid=0;
    for (int i = 1; i < len; i++)
    {
        if (a[i]>a[maxid])
        {
            maxid=i;
        }
        
    }
    return maxid;
}