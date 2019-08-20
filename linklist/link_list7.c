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

      //求表长
      int GetLength(LL * h)
      {
         LL * hl = h;
         int i = 0;
         while(hl->next !=NULL )
         {

             hl = hl->next;
             i++;
             printf("Length: %d\n",i);
         }
         return i;
      }


    //求表长
    int length = GetLength(head);
     printf("***********************************************\n");

    LL * h1 = head;
     while(h1->next)
     {
        printf("number: %d\n",h1->next->number);
        h1 = h1->next;
     }

     printf("***********************************************\n");

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

      int a = GetNode(head,3);

printf("***********************************************\n");
    //插入节点

    void InsertLinkList(LL * head,int x,int i)
    {
        printf("插入位置：%d\n",i);
        LL * p = head->next;
        int pos = 1;
        while(p != NULL)
        {
            if(pos == i-1){       //插入位置
                LL * node = (LL *)malloc(sizeof(LL));
                node->number = x;
                node->next = p->next;
                p->next = node;
            }
            printf("Insert number: %d\n",p->number);
            pos++;
            p = p->next;
        }

    }

    LL * h2 = head;
    InsertLinkList(h2,888,4);







	return 0;
}
