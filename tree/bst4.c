
#include <stdio.h>
#include <stdlib.h>


void test(int * p)
{
    int b = 100;
    *p = b;
}

int main()
{
    int a = 200;
    test(&a);
    printf("a=%d\n",a);

}