//输入一个整数  123456 ，逆序输出

#include <stdio.h>
#include <stdlib.h>



void test(int num)
{
    if(num>10)
    {
        printf("%d\n",num%10);
        num = num / 10;
        test(num);
    }
}


int main()
{
    int a = 123456;
    int b = a/10;
    printf("%d/10 = %d\n",a,b);

    printf("******************************\n");
    int num = 123456;
    printf("num=%d\n",num);
    test(num);


    return 0;
}