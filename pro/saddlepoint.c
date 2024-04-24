/*
鞍点（5分）
题目内容：
给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），在该位置上的元素是第i行上的最大数，第j列上的最小数。
一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。
输入格式:
输入的第1行是一个正整数n, （1<=n<=100），然后有n行，每一行有n个整数，同一行上两个整数之间有一个或多个空格。
输出格式：
对输入的矩阵，如果找到鞍点，就输出其下标。下标为两个数字，第一个数字是行号，第二个数字是列号，均从0开始计数。
如果找不到，就输出
NO
题目所给的数据保证了不会出现多个鞍点。
输入样例：
4 
1 7 4 1 
4 8 3 6 
1 6 1 2 
0 7 8 9
输出样例：
2 1
*/
#include <stdio.h>
int max(int q,int len,int b[len][q]);
int min(int k,int len,int b[k][len]);
int main()
{
    //初始化二维数组作为矩阵
    int n,i,j;
    printf("请输入n来决定矩阵大小");
    scanf("%d",&n);
    int a[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("赋值成功，您输入的矩阵为\n");
    //输出矩阵
    for ( i = 0; i < n; i++)
    {        
        for ( j = 0; j < n; j++)
        {
            printf("%d ",a[i][j] );
        }
        printf("\n");   
    }
    printf("初始化完毕\n");
    int x=max(0,n,a);//return x of maxid 找到第一行最大数的列位置
    int y=min(x,n,a);//return y of minid 找到对应一列最小位置
    printf("%d %d",y,x);
}
//找出每一行的max
//多维数组必须对除第一个维度外的所有维度都有边界
int max(int q,int len,int b[len][q])
{
    int maxid=0;
    for (int i = 1; i < len; i++)
    {
        if (b[q][i]>b[q][maxid])
        {
            maxid=i;
        }
        
    }
    return maxid;
}
//找到每一列的min
int min(int k,int len,int b[k][len])
{
    int minid=0;
    for (int i = 1; i < len; i++)
    {
        if (b[i][k]<b[minid][k])
        {
            minid=i;
        }
        
    }
    return minid;
}