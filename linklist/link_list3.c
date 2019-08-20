#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct LinkList
    {
        int num;                    //数据域
        struct LinkList * next;     //指针域，指向下一个相同节点的地址
    };

    typedef struct LinkList LL;

    LL * first = (LL *) malloc(sizeof(LL));     //第一个元素节点赋值

    first->num = 100;
    first->next = NULL;

    //printf("num : %d\n",first->num);

    //创建第二个节点
    LL * second = (LL *) malloc(sizeof(LL));
    second->num = 200;
    second->next = NULL;

    //将第一个节点的指针指向第二个节点
    first->next = second;

    //创建第三个节点
    LL * third = (LL *)malloc(sizeof(LL));
    third->num = 300;
    third->next = NULL;

    second->next = third;


    LL * head = first;

    while(head)
    {
        printf("num: %d\n",head->num);
        head = head->next;
    }

	return 0;
}
