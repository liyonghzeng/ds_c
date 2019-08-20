//冒泡排序

#include <stdio.h>
#include <stdlib.h>
#define MAX 10          //存储元素个数


typedef struct RecordType
{
    int key;            //排序键值
    // Datatype xxx;
} R;


//冒泡排序
void BubbleSort(R arr[],int length)
{
    int i,j,endsort;
    R tmp;
    for(i=1;i<=length;i++)
    {
        endsort = 0;
        for(j=1;j<=length-i;j++)
        {
            if(arr[j].key > arr[j+1].key)
            {
                tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
                endsort = 1;
            }
        }

        if(endsort==0){break;}
    }
}


int main()
{
    //初始化 无序表
    int length = 5;
    R arr[length+1];
    for(int i=1;i<=length;i++)
    {
        int rd = rand() % 100;
        arr[i].key = rd;
        printf("[%d]=%d ",i,rd);
    }
    printf("\n冒泡排序\n");
    BubbleSort(arr,length);

    for(int i=1;i<=length;i++)
    {
        printf("[%d]=%d ",i,arr[i].key);
    }
    printf("\n");


    return 0;

}
