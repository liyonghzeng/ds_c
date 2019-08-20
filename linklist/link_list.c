#include <stdio.h>
#include <stdlib.h>

int main()
{

    //定义数据类型 DataType
	typedef struct{
		int age;
		char name[64];	
	} DataType;


    //定义链表
	typedef struct node
	{
		DataType data;              //数据域
		struct LinkList * next;     //指针域
	}Node, * LinkList;

	//初始化
	LinkList InitLinkList()
	{
        LinkList head;
        head = malloc(sizeof(Node));
        head->next = NULL;
        return head;
	};


	Node n1,n2,n3;
	//Node * head;

	n1.data = {11,"zhangsan11"};
//	n2.data = {22,"zhangsan22"};
//	n3.data = {33,"zhangsan33"};

//	head = &n1.data;
//	n1.next = &n2.data;
//	n2.next = &n3.data;
//	n3.next = NULL;

	return 0;
}
