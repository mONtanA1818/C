#include<stdio.h>
int main(){
    printf("请输入班级人数：");
    int num;
    int fact=1;
    scanf("%d",&num);
    //while (fact<=num){
      //  printf("%d ",fact);
        //fact+=2;
    //}
    for (;fact<=num;fact+=2){
        printf("%d ",fact);
    }
    return 0;
}