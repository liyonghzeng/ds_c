#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct LinkList
    {
        int number;
        struct LinkList * next;
    };


    typedef struct LinkList LL;


    //初始化链表 带头节点
    LL * InitLinkList()
    {
        LL * first = (LL *)malloc(sizeof(LL));
        first->number = 0;
        first->next = NULL;
        return first;
    }

    //初始化
    LL * p = InitLinkList();

    //循环赋值
    LL * head = p;
    for(int i=1;i<10;i++)
    {
        LL * node = (LL *)malloc(sizeof(LL));
        node->number = i;
        node->next = NULL;

        p->next = node;
        p = node;
    }


    while(head)
    {
        printf("number %d\n",head->number);
        head = head->next;
    }

    printf("*********************************************\n");


    //初始化链表 不带头节点
    LL * InitLinkList0()
    {
        LL * p0 = (LL *)malloc(sizeof(LL));
        return p0;
    }

    //循环赋值
    LL * p0 = InitLinkList0();
    LL * head0 = p0;
    for(int i=1;i<10;i++)
    {
        LL * node = (LL *)malloc(sizeof(LL));
        node->number = i;
        node->next = NULL;

        p0->next = node;
        p0 = node;
    }

    while(head0->next)
    {
        head0 = head0->next;
        printf("number %d\n",head0->number);
    }

	return 0;
}
