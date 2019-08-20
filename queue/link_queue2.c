#include <stdio.h>
#include <stdlib.h>


typedef int Datatype;

typedef struct LinkQueueNode
{
    Datatype data;
    struct LinkQueueNode * next;
}LQN;

typedef struct LinkQueue
{
    LQN * front;
    LQN * rear;
}LQ;


//初始化
void InitQueue(LQ * lq)
{
    LQN * head = (LQN *)malloc(sizeof(LQN));
    head->next = NULL;

    lq->front = head;
    lq->rear = head;
}

//判空
int EmptyQueue(LQ * lq)
{
    if(lq->front == lq->rear)
    {
        return 1;
    }else{
        return 0;
    }

}

//入队
void EnQueue(LQ * lq,Datatype x)
{
    //创建节点
    LQN * node = (LQN *)malloc(sizeof(LQN));
    node->data = x;
    node->next = NULL;

    (lq->rear)->next = node;
    lq->rear = node;
}

//出队
void OutQueue(LQ *lq)
{
    LQN * out = lq->front->next;
    lq->front->next = out->next;

    if((lq->front)->next==NULL){
        lq->rear = lq->front;
    }

    free(out);
}


int main()
{

    LQ lq;
    LQ * p = &lq;

    InitQueue(p);

    return 0;
}