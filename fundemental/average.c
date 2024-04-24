#include <stdio.h>
int main(){
    int x;
    int cnt=0;
    int sum=0;
    int number[100];
    printf("请输入一些数以计算平均值\n");
    scanf("%d",&x);
    while(x!=-1)
    {
        number[cnt]=x;
        //
        {
            int i;
            printf("%d\t",cnt);
            for (i = 0; i <=cnt; i++)
            {
                printf("%d\t",number[i]);
            }
            printf("\n");
        }
        //
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if (cnt>0)
    {
        printf("%f\n",1.0*sum/cnt);
        int i;
        for (i=0;i<cnt;i++)
        {
            if(number[i]>sum/cnt){
                printf("%d\n",number[i]);
            }
        }
    }
    
    printf("平均数的计算结果为%f",1.0*sum/cnt);
    return 0;
}