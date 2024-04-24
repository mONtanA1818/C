#include <stdio.h>
int main()
{
    printf("请输入需要处理的数字并用空格隔开");
    int oddnum=0,evennum=0,num=0;
    do{
        scanf("%d",&num);
        if (num!=-1)
        {
            if(num%2==0)
            {
                evennum++;
            }
            else
            {
                oddnum++;
            }
        }
        
    }while(num!=-1);
    printf("%d %d",oddnum,evennum);
    return 0;
}
