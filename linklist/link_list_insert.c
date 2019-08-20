#include <stdio.h>
#include <stdlib.h>

int main()
{

    //定义节点类型
    typedef struct LinkList{
        int number;                     //数据域
        struct LinkList * next;         //指针域
    } LL;

    //初始化链表
     LL * InitLinkList()
     {
        LL * first = (LL *)malloc(sizeof(LL));
        first->next = NULL;
        return first;
     }



    //循环赋值
    LL * head = InitLinkList();        // 创建空链表
    LL * p = head;                     // 创建工作指针

    for(int i=100;i<1000;i+=100)
    {
        //创建新节点
        LL * node = (LL *)malloc(sizeof(LL));
        node->number = i;
        node->next = NULL;

        p->next = node;
        p = node;

    }

//遍历输出
    LL * h1 = head;
     while(h1->next)
     {
        printf("number: %d\n",h1->next->number);
        h1 = h1->next;
     }

printf("**************************************\n");

      //读表元素
      LL * LocateNode(LL * head,int pos)
      {
            LL * h = head;
            int i = 1;
            while(i<=pos)
            {
                if(i==pos){
                    return h;
                }
                h = h->next;
                i++;
            }

      }

    printf("*****************INSERT*******************\n");

    // 插入节点
    void InsertLinkList(LL * head,int data,int pos)
    {
        printf("插入位置 %d,data: %d\n",pos,data);

        LL * prev = LocateNode(head->next,pos-1);   //找到 插入位置的前一个节点  pos-1
        LL * new_node = (LL *)malloc(sizeof(LL));   //创建新节点
        new_node->number = data;                    // 新节点数据域
        new_node->next = prev->next;                //新节点指针指向 前一个节点的next(原来的位置pos)
        prev->next = new_node;                      // 前一个节点的next指向新节点
    }

    InsertLinkList(head,999,5);


    LL * h2 = head;
     while(h2->next)
     {
        printf("number: %d\n",h2->next->number);
        h2 = h2->next;
     }

	return 0;
}
