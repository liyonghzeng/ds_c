#include <stdio.h>
#include <stdlib.h>

//定义数据类型
typedef int Datatype;


//定义链栈
typedef struct LinkStack
{
    Datatype data;
    struct LinkStack * next;
}LS;


//初始化
LS * InitLinkStack()
{
    LS * ls = (LS *)malloc(sizeof(LS));
    ls->next = NULL;
    return ls;
}

//判栈空
int EmptyLinkStack(LS * ls)
{
    if(ls->next == NULL)
    {
        return 1;
    }else{
        return 0;
    }
}

//压栈
int PushLinkStack(LS * ls,Datatype x)
{
    //创建节点
    LS * node = (LS *)malloc(sizeof(LS));
    node->data = x;
    node->next = ls->next;

    ls->next = node;
}


//出栈
int PopLinkStack(LS * ls)
{
    if(EmptyLinkStack(ls)==1)
    {
        printf("栈已空\n");
        return 0;
    }else{
        //保存当前栈顶地址
        LS * p = ls->next;
        ls->next = p->next;
        free(p);
        return 1;
    }
}


int main()
{


    LS * l = InitLinkStack();

    PushLinkStack(l,11);
    PushLinkStack(l,22);
    PushLinkStack(l,33);

    LS * p = l->next;
    while(p)
    {
        printf("top: %d\n",p->data);
        p = p->next;
    }


    return 0;
}
