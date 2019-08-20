#include <stdio.h>
#include <stdlib.h>

int main()
{

    //定义链表
	typedef struct Link
	{
		int num;                //数据域
		struct Link * next;     //指针域
	}link;


    //链表初始化
    link * initList()
    {
        link * head = NULL;     // 创建头指针
        link * first = (link *)malloc(sizeof(link));        //创建第一个元素结点
        first->num = 100;
        first->next = NULL;

        head = first;

        //循环创建节点
        for(int i=200;i<1000;i+=100)
        {
            link * node = (link *)malloc(sizeof(link));
            node->num = i;
            node->next = NULL;
            first->next = node;
            first = first->next;
        }

        return head;
    }


    //遍历 链表
    link * n = initList();
    while(n)
    {
        printf("data: %d\n",n->num);
        n = n->next;
    }


	return 0;
}
