#include <stdio.h>
#include <stdlib.h>



typedef int Datatype;

typedef struct LinkStack
{
    Datatype data;
    struct LinkStack * next;
}LS;


//初始化
LS * InitStack()
{
    LS * ls = (LS *)malloc(sizeof(LS));
    ls->next = NULL;
    return ls;
}

//判栈空
int EmptyStack(LS * ls)
{
    if(ls->next==NULL)
    {
        return 1;
    }else{
        return 0;
    }
}


//压栈 进栈
int Push(LS * ls,Datatype x)
{
    //创建节点
    LS * node = (LS *)malloc(sizeof(LS));
    node->data = x;
    node->next = ls->next;      // 新创建的节点的next 应该指向 原来栈顶
    ls->next = node;            // 新的栈顶 指向新创建的节点
    return 1;
}


//出栈
LS * Pop(LS * ls)
{
    if(EmptyStack(ls)==1)
    {
        printf("栈已空\n");
        return ls;
    }else{
        LS * top = ls->next;        // 获取 要释放的节点 top
        ls->next = top->next;       // 新的栈顶 应该指向 top->next 原栈顶的next
        free(top);
        return ls;
    }
}

int main()
{

    LS * head = InitStack();

    Push(head,11);
    Push(head,22);
    Push(head,33);


    LS * p = head->next;
    while(p)
    {
        printf("top: %d\n",p->data);
        p = p->next;
    }

printf("*****************************\n");
    Pop(head);
    Pop(head);
    Pop(head);
    Pop(head);

    LS * p1 = head->next;
    while(p1)
    {
        printf("top: %d\n",p1->data);
        p1 = p1->next;
    }


    return 0;
}