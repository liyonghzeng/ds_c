#include <stdio.h>
#include <stdlib.h>
#define MAX 10          //存储元素个数


//定义节点类型
typedef struct
{
    int key;            //排序键值
    //int age;         //根据情况保存数据
    //char name[32];         //根据情况保存数据
} RecordType;

typedef RecordType List[MAX+1];


//对有表R进行直接插入排序
void StraightInsertSort(List R,int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        R[0] = R[i];
        j = i - 1;          //控制while循环

        while(R[0].key < R[j].key)
        {
            R[j+1] = R[j];
            j--;
        }

        R[j+1] = R[0];
    }
}


int main()
{

    //int arr[] = {22,11,44,33,23,88,43}
    //待排序序列 arr
    RecordType arr[MAX+1];      //
    //初始化序列
    for(int i=1;i<=MAX;i++)
    {
        int rd = rand()%100;
        printf("%d ",rd);
        arr[i].key = rd;
    }

    printf("\n******************************\n");
    for(int j=1;j<=MAX;j++)
    {
        printf("%d ",arr[j].key);
    }

    printf("\n");

    int length = 5;
    //直接插入排序
    StraightInsertSort(arr,length);      //对表长为length的表进行排序

    printf("\n************直接插入排序***********\n");
    for(int j=1;j<=MAX;j++)
    {
        printf("%d ",arr[j].key);
    }

    printf("\n");


}