#include <stdio.h>
#include <stdlib.h>

#define STACK_MAX 5

typedef struct Stack
{
	int number[STACK_MAX];
	int top;
}STK;


int main()
{
	//初始化栈
	STK * InitStack()
	{
		STK * s = (STK *)malloc(sizeof(STK));
		s->top = 1;		
	}

	STK * s1 = InitStack();


	//入栈
	void PushStack(STK * s,int node)
	{
		printf("当前栈top: %d\n",s->top);
		printf("Push 节点 %d\n",node);
		//是否已满
		if(s->top>STACK_MAX)
		{
			printf("栈满\n");
			exit;
		}

		s->number[s->top] = node;
		s->top++;
	}


	PushStack(s1,10);
	PushStack(s1,2);
	PushStack(s1,5);
	PushStack(s1,7);
	PushStack(s1,33);

	printf("********************************\n");
	//出栈
	int PopStack(STK * s)
	{
		if(s->top==0)
		{
			printf("栈空");
			return 0;
		}else{
			int node = s->number[s->top];
			s->top--;
			return node;
		}

	}

	int b1 = PopStack(s1);
	printf("出栈节点：%d\n",b1);
	int b2 = PopStack(s1);
	printf("出栈节点：%d\n",b2);

	printf("top=%d\n",s1->top);
	printf("top1=%d\n",s1->number[s1->top-1]);

	return 0;
}
