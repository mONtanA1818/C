#include <stdio.h>
int main()
{
    const minor=35;
    int age;
    printf("请输入您的年龄\n");
    scanf("%d",&age);
    if (age<minor){
        printf("年轻是美好的\n");
    }
    printf("年龄决定了你的精神世界，好好珍惜吧");
    return 0;
}