#include <stdio.h>
#include <stdlib.h>

int main()
{

    //定义链表结构
    struct LinkList
    {
        int num;
        struct LinkList * next;
    };

    typedef struct LinkList LL;



    LL * head;      //创建头指针
    LL * n1 = (LL *)malloc(sizeof(LL));      //创建第一个元素节点

    n1->num = 100;
    n1->next = NULL;

    head=n1;

    printf("first num: %d\n",head->num);
    printf("***************************************\n");

    //创建第二个节点
    LL * n2 = (LL *)malloc(sizeof(LL));
    n2->num = 200;
    n2->next = NULL;
    n1->next = n2;

    //创建第三个节点
    LL * n3 = (LL *)malloc(sizeof(LL));
    n3->num = 300;
    n3->next = NULL;
    n2->next = n3;

    while(head)
    {
        printf("node num: %d\n",head->num);
        head = head->next;
    }


	return 0;
}
