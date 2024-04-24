#include <stdio.h>
int main()
{
    int one,two,five,x;
    printf("请输入需要用硬币找零的金额(元)");
    scanf("%d",&x);
    int exit=0;
    for (one=1;one<x*10;one++)
    {
        for (two=1;two<x*10/2;two++)
        {
            for (five=1;five<x*10/5;five++)
            {
                if (one+two*2+five*5==x*10)
                {
                    printf("需要找您%d个五角%d个两角%d个一角\n",
                    five,two,one);
                    exit=1;
                    goto out;
                }
            }
        } 
    }
out:
    return 0;
}