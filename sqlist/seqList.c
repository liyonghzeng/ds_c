/*
*   顺序表
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX 8

typedef int Datatype;
typedef struct SeqList
{
    Datatype data[MAX];
    int length;
}SL;


//初始化线性表
void InitSeqList(SL * sl)
{
    sl->length = 0;
}

//求表长
int GetLength(SL * sl)
{
    return sl->length;
}

//删除某个节点
void DeleteNode(SL * sl,int i)
{
    if(i>sl->length || i<1){
        printf("位置不正确\n");
        exit;
    }

    if(sl->length==0){
        printf("空表 不能删除\n");
        exit;
    }

    for(int j=i;j<sl->length;j++)
    {
        sl->data[j-1] = sl->data[j];
        sl->length--;
    }

}

int main()
{
    SL sl;
    SL * p = &sl;

    //初始化
    InitSeqList(p);
    int length = GetLength(p);
    printf("长度为：%d\n",length);

    //循环赋值
    int i=0;
    int data;
    while(p->length<MAX)
    {
        printf("请输入整数值：\n");
        scanf("%d",&data);
        p->data[p->length] = data;
        p->length++;

        printf("表长length: %d\n",GetLength(p));
    }



    int j = 0;
    while(j<MAX)
    {
        printf("下标j=%d,data=%d\n",j,p->data[j]);
        j++;
    }

    int pos;
    printf("输入删除的位置i=");
    scanf("%d",&pos);
    DeleteNode(p,pos);

    printf("********************\n");
    j = 0;
    while(j<MAX)
    {
        printf("下标j=%d,data=%d\n",j,p->data[j]);
        j++;
    }

    return 0;
}