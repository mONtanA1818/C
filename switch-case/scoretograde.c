#include <stdio.h>
int main(){
    while (1){
    int score,t;
    printf("请输入您的成绩");
    scanf("%d",&score);
    t=score/10;
    switch (t)
    {
    case 10:
    case 9:
        printf("您的等级为\nA");
        break;
    case 8:
        printf("您的成绩等级为\nB");
        break;
    case 7:
        printf("您的成绩等级为\nC");
        break;
    case 6:
        printf("您的成绩等级为\nD");
        break;
    default:
        printf("您的成绩等级为\nE");
        break;
    }
    printf("\n");
    }
    return 0;
}