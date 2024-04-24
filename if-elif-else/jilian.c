#include <stdio.h>
int main(){
    int x,f;
    printf("请输入x的值\n");
    scanf("%d",&x);
    if (x<0){
        f=-1;
    }else if(x==0){
        f=0;
    }else{
        f=2*x;
    }
    printf("%d",f);
    return 0;
}