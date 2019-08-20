#include <stdio.h>
#include <stdlib.h>


typedef int Datatype;

typedef struct LinkStack
{
    Datatype data;
    struct LinkStack * next;
}LS;


//初始化链栈
LS * InitLinkStack()
{
    LS * ls = (LS *)malloc(sizeof(LS));
    ls->next = NULL;
    return ls;
}


//入栈 头插法
void PushLinkStack(LS * ls,Datatype x)
{

    //创建新节点
    LS * node = (LS *)malloc(sizeof(LS));
    node->data = x;

    //新节点的next 指向上一个头结点（栈顶）
    node->next = ls->next;
    ls->next = node;
}

//出栈
int PopLinkList(LS * ls)
{
    if(ls->next == NULL)
    {
        printf("栈已空，勿Pop");
        return 0;
    }else{
        LS * p = ls->next;
        ls->next = p->next;
        Datatype node = p->data;
        free(p);
        return 1;
    }
}



int main()
{

    LS * ls1 = InitLinkStack();

    Datatype num1 = 100;
    PushLinkStack(ls1,num1);
    Datatype num2 = 200;
    PushLinkStack(ls1,num2);
    Datatype num3 = 300;
    PushLinkStack(ls1,num3);
    Datatype num4 = 400;
    PushLinkStack(ls1,num4);


    LS * p = ls1->next;
    while(p)
    {
        printf("top: %d\n",p->data);
        p = p->next;
    }

    printf("**************************\n");
    Datatype pop1 = PopLinkList(ls1);
    printf("**************************\n");


    LS * p1 = ls1->next;
    while(p1)
    {
        printf("top: %d\n",p1->data);
        p1 = p1->next;
    }

	return 0;
}
