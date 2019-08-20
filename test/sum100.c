#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for(int i=0;i<=100;i++)
    {
        sum += i;
    }

    printf("sum=%d\n",sum);

}