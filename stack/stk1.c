#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX 5

typedef struct
{
	int number[STACK_MAX];
	int top;
}STK;


	//初始化栈
	STK * InitStack()
	{
	    STK * s = (STK *)malloc(sizeof(STK));
		s->top = 0;
		return s;
	}

	//入栈
	int PushStack(STK * s,int x)
	{
	    if(s->top==STACK_MAX-1){        //栈满
	        printf("栈满，不能入栈了\n");
	        return 0;
	    }else{
	        s->number[s->top] = x;
	        s->top++;
	        return s->top;
	    }

	}

	//出栈
	int PopStack(STK * s)
	{
        if(s->top==0){
            printf("栈空,不能出栈了\n");
        }else{
            int node = s->number[s->top-1];
            s->top--;
            return node;
        }
	}

	//取栈顶元素
	int GetTop(STK * s)
	{
	    if(s->top==0){
	        printf("空栈，无节点\n");
	    }else{
	        return s->number[s->top-1];
	    }
	}


int main()
{

    STK * s = InitStack();
    printf("top: %d\n",s->top);

    int top1 = PushStack(s,11);
    int top2 = PushStack(s,22);
    int top3 = PushStack(s,33);
    int top4 = PushStack(s,44);
    int top5 = PushStack(s,55);

    //遍历
    for(int i=s->top-1;i>=0;i--)
    {
        printf("number: %d\n",s->number[i]);
    }

    //
    int pop1 = PopStack(s);
    printf("pop1 %d\n",pop1);
    int pop2 = PopStack(s);
    printf("pop2 %d\n",pop2);
    int pop3 = PopStack(s);
    printf("pop3 %d\n",pop3);

	return 0;
}
