#include <stdio.h>
#include <stdlib.h>

int main()
{

    typedef struct LinkList{
        int number;                     //数据域
        struct LinkList * next;         //指针域
    } LL;

    //初始化链表
    LL * InitLinkList()
    {
        LL * head = (LL *)malloc(sizeof(LL));      //初始化一个空节点 数据域为空
        head->next = NULL;
        return head;
    }

    LL * l1 = InitLinkList();           // 创建空链表 l1
    LL * p = l1;                        // 定义指针保存 l1的首地址

    //循环赋值
    for(int i=1;i<10;i++)
    {
        //创建新节点
        LL * node = (LL *)malloc(sizeof(LL));
        node->number = i;
        node->next = NULL;

        //关联
        p->next = node;
        p = node;
    }
    printf("%p\n",l1);

    while(l1)
    {
        printf("number: %d\n",l1->number);
        l1 = l1->next;
    }

	return 0;
}
