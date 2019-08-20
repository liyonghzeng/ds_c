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

    LL * p = NULL;      //创建头指针
    LL * tmp = (LL *)malloc(sizeof(LL));    //创建 第一个元素节点

    tmp->num = 100;
    tmp->next = NULL;

    p = tmp;        // 头结点指点 首节点

    for(int i=200;i<1000;i+=100)
    {
        LL * a = (LL *)malloc(sizeof(LL));
        a->num = i;
        a->next = NULL;

        tmp->next = a;
        tmp = tmp->next;

    }

    while(p)
    {
        printf("num: %d\n",p->num);
        p = p->next;
    }


	return 0;
}
