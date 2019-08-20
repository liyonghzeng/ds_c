//顺序队列
#include <stdio.h>
#include <stdlib.h>

#define MAX 6

typedef int Datatype;

typedef struct CycQueue
{
    Datatype data[MAX];
    int front,rear;
}CQ;


//初始化
int InitCycQueue(CQ * cq)
{
    cq->front = 0;
    cq->rear = 0;
    return 0;
}

//判满 (尾 +1)%MAX == 头
int FullQueque(CQ * cq)
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
    if(FullQueque(cq)==0){      //未满
        cq->rear = (cq->rear + 1) % MAX;
        cq->data[cq->rear] = x;
       return 1;
    }else{
        printf("队列已满\n");
        return 0;
    }

}

//判空
int EmptyQueue(CQ *cq)
{
    if(cq->rear == cq->front){
        return 1;
    }else{
        return 0;
    }
}

//出队
int OutQueue(CQ * cq)
{
    if(EmptyQueue(cq)){
        return 0;
    }else{
        cq->front = (cq->front+1) % MAX;
        return 1;
    }
}




int main()
{

    CQ cq,*p;

    p = &cq;
    //初始化
    int a = InitCycQueue(p);

    //入队
    EnQueue(p,11);
    EnQueue(p,22);
    EnQueue(p,33);
    EnQueue(p,44);
    EnQueue(p,55);
    EnQueue(p,66);

    for(int i=0;i<MAX;i++)
    {
        printf("i=%d,data: %d\n",i,p->data[i]);
    }

    printf("**********************\n");

    OutQueue(p);
    OutQueue(p);

    EnQueue(p,66);
    EnQueue(p,77);
    EnQueue(p,88);



    for(int j=0;j<MAX;j++)
    {
        printf("j=%d,data: %d\n",j,p->data[j]);
    }

    return 0;
}