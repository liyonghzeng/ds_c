//冒泡排序 使用 tmp变量

#include <stdio.h>
#include <stdlib.h>
#define MAX 10          //存储元素个数

typedef struct RecordType
{
    int key;
    //DataType node;
}List;


void BubbleSort(List arr[],int length)
{
    int i,j,endsort;
    List tmp;

    for(i=0;i<length;i++)
    {
        endsort = 0;        // 0 结束排序
        for(j=0;j<length-i-1;j++)
        {
            if(arr[j].key>arr[j+1].key)
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            }
            endsort = 1;        //继续
        }

        if(endsort==0){break;}
    }

}

int main()
{
    List arr[MAX];
    for(int i=0;i<MAX;i++)
    {
        int rd = rand()%98;
        arr[i].key = rd;
    }

    printf("\n******************************\n");
    for(int j=0;j<MAX;j++)
    {
        printf("[%d]=%d ",j,arr[j].key);
    }

    printf("\n");

    printf("\n************冒泡排序***********\n");
    //冒泡排序
    int length = 10;
    BubbleSort(arr,length);

    for(int j=0;j<MAX;j++)
    {
        printf("[%d]=%d ",j,arr[j].key);
    }

    printf("\n");

    return 0;

}