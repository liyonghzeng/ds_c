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
                    //printf("Pos: %d, data: %d\n",i,h->number);
                    return h;
                }
                h = h->next;
                i++;
            }

      }

      LL * lhead2 = head->next;
      LL * node = LocateNode(lhead2,5);
      printf("Node Number: %d\n",node->number);

   printf("*****************************\n");

    void DeleteNode(LL * head,int pos)
    {
        printf("删除的节点i=%d\n",pos);
        LL * prev = LocateNode(head,pos-1);
        LL * delete_node = prev->next;              // 要删除的节点
        printf("直接前驱 number=%d\n",prev->number);

        prev->next = delete_node->next;
        free(delete_node);

    }

    DeleteNode(head->next,4);

printf("*************DELETE************\n");

     //遍历链表
     LL * lhead1 = head->next;
     while(lhead1)
     {
        printf("Number: %d\n",lhead1->number);
        lhead1 = lhead1->next;
     }



	return 0;
}
