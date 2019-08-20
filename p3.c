#include <stdio.h>

int main()
{

    int a = 100;
    int b = 200;


    //定义一个函数
    void swap(int * x,int * y)
    {
        int tmp = *x;       // int tmp = a;
        *x = *y;
        *y = tmp;
    }

    printf("a b 的原始值：a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);
	
	return 0;
}
