#include <stdio.h>
#include <stdlib.h>

#define MAX 32

typedef char Datatype;

typedef struct SeqTree
{
    Datatype data[MAX];
}ST;


//求左孩子
Datatype GetLchild(ST * st,int pos)
{
    if(pos*2<=MAX-1)
    {
        return st->data[pos*2];
    }else
    {
        return st->data[0];
    }
}

//求右孩子
Datatype GetRchild(ST *st,int pos)
{
    if(pos*2+1>MAX-1)
    {
        printf("无右孩子\n");
    }else{
        return st->data[pos*2+1];
    }
}


int main()
{

    //定义一个完全二叉树变量
    ST t1;
    ST * p = &t1;

    //构造完全二叉树
    int i = 1;
    char c;
    while(i<MAX)
    {
        printf("请输入 %d个元素中的第%d个：\n",MAX-1,i);
        scanf("%c",&c);
        getchar();
        p->data[i] = c;
        i++;
    }

    int j=1;
    while(j<MAX)
    {
        printf("j=%d,data=%c\n",j,p->data[j]);
        j++;
    }


    int pos;
    while(1)
    {
        printf("*******************\n\n");
        printf("请输入父节点编号：\n");

        scanf("%d",&pos);
        Datatype child = GetLchild(p,pos);
        printf("位置%d的左孩子为%c\n",pos,child);

        child = GetRchild(p,pos);
        printf("位置%d的右孩子为%c\n",pos,child);
    }


    return 0;
}