#include <stdio.h>
int main(){
    int gameover;
    int score;
    printf("请输入gamerover的值");
    scanf("%d",&gameover);
    printf("请输入score的值");
    scanf("%d",&score);
    if (gameover>=1&&score>=1){
        printf("轮到我了");
    }else if(gameover<1&&score<1){
        printf("轮到你了");
    }else {
        printf("输入的格式有误");
    }
    return 0;
}