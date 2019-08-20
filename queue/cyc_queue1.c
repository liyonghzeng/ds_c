//循环队列

#include <stdio.h>
#include <stdlib.h>

#define MAX 6


typedef int Datatype;

typedef struct CycleQueue
{
    Datatype data[MAX];
    int front;
    int rear;
}CQ;


//初始化
void InitQueue(CQ * cq)
{
    cq->front = 0;
    cq->rear = 0;
}


//判满
int FullQueue(CQ * cq)
{
    if((cq->rear+1)%MAX == cq->front){
        return 1;
    }else{
        return 0;
    }
}

//入队
int EnQueue(CQ * cq,Datatype x)
{
    if(FullQueue(cq)==0){   //队列未满 ，可以入队
        cq->rear = (cq->rear+1) % MAX;
        cq->data[cq->rear] = x;
        return 1;
    }else{
        printf("队列满\n");
        return 0;       //不能入队
    }

}

//判空
int EmptyQueue(CQ * cq)
{
    if(cq->rear == cq->front){
        return 1;
    }else{
        return 0;       //非空
    }
}

//出队
int OutQueue(CQ * cq)
{
    if(EmptyQueue(cq)==0)       //非空
    {
        printf("出队\n");
        cq->front = (cq->front + 1) % MAX;
        //cq->data[cq->front] = 0;
        return 1;
    }else
    {
        printf("已到队尾\n");
        return 0;       //不能出队
    }
}


//取队首
Datatype GetHead(CQ * cq)
{
    int pos = (cq->front +1) % MAX;
    return cq->data[pos];
}




int main()
{

    CQ cq;
    CQ * p = &cq;


    //初始化 队首 队尾 0
    InitQueue(p);


    //入队
    EnQueue(p,11);
    EnQueue(p,22);
    EnQueue(p,33);
    EnQueue(p,44);
    EnQueue(p,55);

    for(int i=0;i<MAX;i++)
    {
        printf("i=%d,data=%d\n",i,p->data[i]);
    }


    printf("***************************\n");


    Datatype front = GetHead(p);
    printf("front: %d\n",front);

    OutQueue(p);

    front = GetHead(p);
    printf("front: %d\n",front);


    return 0;
}
