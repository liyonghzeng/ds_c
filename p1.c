#include <stdio.h>



void swap(int * num1,int * num2){
    int tmp = *num1;

    *num1 = *num2;
    *num2 = tmp;
}



int main()
{
    int a = 10;
    int b = 100;

    printf("a=%d b=%d\n",a,b);

    swap(&a,&b);

    printf("a=%d b=%d\n",a,b);

    return 0;


}