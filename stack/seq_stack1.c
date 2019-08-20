#include <stdio.h>
#include <stdlib.h>

#define MAX 7


typedef int Datatype;

typedef struct SeqStack
{
    Datatype data[MAX];
    int top;
}SS;

//判栈满
int FullStack(SS * s)
{
    if(s->top==MAX-1){
        return 1;
    }else{
        return 0;
    }
}


//初始化顺序栈
void InitSeqStack(SS * s)
{
    s->top = 0;
}



//压栈
int PushStack(SS * s,Datatype x)
{
    if(FullStack(s)==1){
        printf("栈满\n");
        return 0;
    }else{
        s->top++;
        s->data[s->top] = x;
        return 1;
    }
}

// 判栈空
int EmptyStack(SS * s)
{
    if(s->top==0)
    {
        return 1;
    }else{
        return 0;
    }
}

//出栈
Datatype PopStack(SS * s)
{
    if(EmptyStack(s)==1){
        printf("栈空\n");
        exit;
    }else{
        Datatype node = s->data[s->top];        //把当前栈顶元素返回
        s->top--;
        return node;
    }
}

int main()
{

    //声明定义一个顺序栈变量

    SS * s1 = (SS *)malloc(sizeof(SS));

    InitSeqStack(s1);
    //printf("top: %d\n",s1->top);

    PushStack(s1,11);
    PushStack(s1,22);
    PushStack(s1,33);
    PushStack(s1,44);
    PushStack(s1,55);
    PushStack(s1,66);
    //PushStack(s1,77);


    //遍历顺序栈
    int i = s1->top;        // 栈顶 5


    while(i>0)
    {
        printf("top: %d\n",s1->data[i]);

        i--;
    }

    //出栈
    printf("************************\n");
    Datatype pop_node = PopStack(s1);
    printf("出栈元素 %d\n",pop_node);
        pop_node = PopStack(s1);
        printf("出栈元素 %d\n",pop_node);
    pop_node = PopStack(s1);
    printf("出栈元素 %d\n",pop_node);
        pop_node = PopStack(s1);
        printf("出栈元素 %d\n",pop_node);
    pop_node = PopStack(s1);
    printf("出栈元素 %d\n",pop_node);
    pop_node = PopStack(s1);
    printf("出栈元素 %d\n",pop_node);
    pop_node = PopStack(s1);
    pop_node = PopStack(s1);
    pop_node = PopStack(s1);
    pop_node = PopStack(s1);


    return 0;
}

