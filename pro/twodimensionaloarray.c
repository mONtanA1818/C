#include <stdio.h>
int main()
{
    const int size=3;
    int board[size][size];
    int i,j;
    int numofO1,numofX1;//检查行的变量
    int numofO2,numofX2;//检查列的变量
    int numofO,numofX;
    int result=-1;  //-1:没人赢，1：X赢。0：O赢
    //读入矩阵
    printf("开始游戏");
    for ( i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d",&board[i][j]);
        }
    }
    //检查行与列
    for ( i = 0; i < size &&result==-1; i++)
    {
        numofO1=numofX1=numofO2=numofX2=0;
        for ( j = 0; j < size; j++)
        {
            if (board[i][j]==1)
            {
                numofX1++;
            }
            else
            {
                numofO1++;
            }
            if (board[j][i]==1)
            {
                numofX2++;
            }
            else
            {
                numofO2++;
            }
            
        }
        if (numofO1==size || numofO2==size)
        {
            result=0;
        }else if (numofX1==size ||numofX2==size)
        {
            result==1;
        }
    }
    //检查正对角线
    if (result==-1)
    {
        numofO=numofX=0;
        for ( i = 0; i < size; i++)
        {
            if (board[i][i]==1)
            {
                numofX++;
            }
            else
            {
                numofO++;
            }
        }
        if (numofO==size)
        {
            result=0;
        }else if (numofX==size)
        {
            result==1;
        }
    }
    //检查反对角线
    if (result==-1)
    {
        numofO=numofX=0;
        for ( i = 0; i < size; i++)
        {
            if (board[i][size-i-1]==1)
            {
                numofX++;
            }
            else
            {
                numofO++;
            }
        }
        if (numofO==size)
        {
            result=0;
        }else if (numofX==size)
        {
            result==1;
        }
    }
    
    printf("%d",result);
    return 0;
}
