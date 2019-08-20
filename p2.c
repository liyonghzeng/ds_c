#include <stdio.h>


int main()
{
    int a = 10;
    int b = 20;

    int *pa = &a;
    int c = *pa + b;

    printf("c=%d\n",c);
}