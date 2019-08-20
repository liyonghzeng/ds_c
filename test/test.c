#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n=10;
    for(int i=0;i<=n;i++)
    {
        printf("外层循环第%d次 hello world\n",i);
        for(int j=0;j<=n;j++)
        {
            printf("内层循环第%d次 hello world\n",j);
        }
    }


    return 0;
}