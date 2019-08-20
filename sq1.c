#include <stdio.h>


int main()
{

    int arr[10] = {1,2,3,4,5,6};

    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("***************************************\n");

    void InsertArr1(int * arr,int x,int i)
    {

        printf("Position: %d\n",i);

        if(i>10 || i<1){
            printf("Err 1\n");

        }

        for(int j=9;j>=i;j--)
        {
            arr[j] = arr[j-1];
        }
        arr[i-1] = x;

        printf("***************************************\n");


        for(int i=0;i<10;i++)
        {
            printf("%d\n",arr[i]);
        }

    }

    InsertArr1(arr,99,5);

	return 0;
}
