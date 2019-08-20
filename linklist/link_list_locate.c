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

     //遍历链表

     LL * lhead = head->next;

     while(lhead)
     {
        printf("Number: %d\n",lhead->number);
        lhead = lhead->next;
     }


    printf("***************************\n");

      //读表元素
      LL * LocateNode(LL * head,int pos)
      {
            LL * h = head;
            int i = 1;
            while(i<=pos)
            {
                if(i==pos){
                    printf("Pos: %d, data: %d\n",i,h->number);
                    return h;
                }
                h = h->next;
                i++;
            }

      }

      LL * lhead2 = head->next;
      LL * node = LocateNode(lhead2,3);

      printf("Node Number: %d\n",node->number);

	return 0;
}
