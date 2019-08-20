#include <stdio.h>
#include <stdlib.h>


typedef int Datatype;

typedef struct LinkQueueNode
{
    Datatype data;
    struct LinkQueueNode *next;
}LQNODE;

typedef struct LinkQueue
{
    LQNODE * front;
    LQNODE * rear;
}LQ;

//初始化
void InitLinKQueue(LQ * lq)
{
    LQNODE * head = (LQNODE *)malloc(sizeof(LQNODE));
    //head->next = NULL;
    lq->front = head;
    lq->rear = head;
    (lq->front)->next = NULL;
}


//入队
void EnQueue(LQ * lq,Datatype x)
{
    //创建节点
    LQNODE * node = (LQNODE *)malloc(sizeof(LQNODE));
    node->data = x;
    node->next = NULL;

    (lq->rear)->next = node;
    lq->rear = node;
}

//出队 改变首指针
int OutQueue(LQ * lq)
{
    if(lq->front == lq->rear){
        printf("空队列，不能出队\n");
        return 0;
    }else{
        LQNODE * out = (lq->front)->next;
        lq->front->next = out->next;

        if(out->next==NULL){        //出队的节点为最后一个节点
            lq->rear = lq->front;
        }

        free(out);
        return 1;
    }

}



int main()
{
    LQ lq;
    LQ * p = &lq;
    InitLinKQueue(p);

    EnQueue(p,11);
    EnQueue(p,22);
    EnQueue(p,33);
    EnQueue(p,44);
    EnQueue(p,55);




printf("**********************\n");
    //遍历
    LQNODE * p_lq = (p->front)->next;
    while(p_lq)
    {
        printf("data=%d\n",p_lq->data);
        p_lq = p_lq->next;
    }


    //出队
    OutQueue(p);
    OutQueue(p);
    //遍历222
    printf("**********************\n");
    LQNODE * p_lq1 = (p->front)->next;
    while(p_lq1)
    {
        printf("data=%d\n",p_lq1->data);
        p_lq1 = p_lq1->next;
    }



    return 0;
}