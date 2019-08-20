//顺序栈实现

#include <stdio.h>
#include <stdlib.h>
#define MAX 10


typedef int Datatype;

typedef struct SeqStack
{
    Datatype data[MAX];
    int top;
}SS;



//初始化
int InitSeqStack(SS * ss)
{
    ss->top = 0;
    return 1;
}

//入栈
int PushStack(SS * ss,Datatype x)
{
    if(ss->top==MAX-1){
        printf("栈已满，勿进栈\n");
        return 0;
    }else{
        ss->top++;
        ss->data[ss->top] = x;
        return 1;
    }
}


//判栈空
int EmptyStack(SS * ss)
{
    if(ss->top==0){
        return 1;
    }else{
        return 0;
    }
}


//出栈
int PopStack(SS * ss)
{
    if(EmptyStack(ss)==1)
    {
        printf("栈已空，勿出栈\n");
        return 0;
    }else{
        ss->top--;
        return 1;
    }
}

//取栈顶元素
Datatype GetTop(SS * ss)
{
    if(EmptyStack(ss)==0){
        return ss->data[ss->top];
    }else{
        printf("空栈，无元素\n");
        exit;
    }
}




int main()
{

    SS * s = (SS *)malloc(sizeof(SS));
    //初始化
    InitSeqStack(s);
    //printf("top: %d\n",s->top);

    //进栈
    PushStack(s,11);
    PushStack(s,22);
    PushStack(s,33);
    PushStack(s,44);
    PushStack(s,55);

    //遍历
    int i = s->top;
    while(i>0)
    {
        printf("top: %d\n",s->data[i]);
        i--;
    }

    printf("***************************************\n");
    //取栈顶
    Datatype top = GetTop(s);
    printf("取栈顶：%d\n",top);


    PopStack(s);
    PopStack(s);
    PopStack(s);
    PopStack(s);
    //PopStack(s);
    //PopStack(s);


    printf("****************************************\n");
    //遍历
    i = s->top;
    while(i>0)
    {
        printf("top: %d\n",s->data[i]);
        i--;
    }


    return 0;
}