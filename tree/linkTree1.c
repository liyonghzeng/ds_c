#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;

typedef struct BTree
{
    Datatype data;
    struct BTree * lchild;
    struct BTree * rchild;
}BT;


//初始化
BT * CreateBtree()
{
    BT * p = (BT *)malloc(sizeof(BT));
    p->data = 1;
    p->lchild = NULL;
    p->rchild = NULL;
    return p;
}

//显示当前节点
void showNode(BT * node)
{
    printf("%d\n",node->data);
}


//先序遍历
void PreTraversal(BT * tree)
{
    BT * p = tree;
    if(p){
        showNode(p);        //显示当前节点
        PreTraversal(p->lchild);
        PreTraversal(p->rchild);
    }
    return;
}

//中序遍历
void InTraversal(BT * tree)
{
    BT * p = tree;
    if(p){
        showNode(p);        //显示当前节点
        InTraversal(p->lchild);
        InTraversal(p->rchild);
    }
    return;
}

int main()
{
    BT * tree = CreateBtree();
    //创建节点
    BT * node2 = (BT *)malloc(sizeof(BT));
    node2->data = 2;
    node2->lchild = NULL;
    node2->rchild = NULL;
    tree->lchild = node2;

    BT * node4 = (BT *)malloc(sizeof(BT));
    node4->data = 4;
    node4->lchild = NULL;
    node4->rchild = NULL;
    node2->lchild = node4;

    BT * node5 = (BT *)malloc(sizeof(BT));
    node5->data = 5;
    node5->lchild = NULL;
    node5->rchild = NULL;
    node2->rchild = node5;


    BT * node3 = (BT *)malloc(sizeof(BT));
    node3->data = 3;
    node3->lchild = NULL;
    node3->rchild = NULL;
    tree->rchild = node3;

    BT * node6 = (BT *)malloc(sizeof(BT));
    node6->data = 6;
    node6->lchild = NULL;
    node6->rchild = NULL;
    node3->lchild = node6;

    BT * node7 = (BT *)malloc(sizeof(BT));
    node7->data = 7;
    node7->lchild = NULL;
    node7->rchild = NULL;
    node3->rchild = node7;

    printf("node1的左孩子： %d\n",tree->lchild->data);
    printf("node1的右孩子： %d\n",tree->rchild->data);
    printf("node2的右孩子： %d\n",tree->lchild->rchild->data);


    printf("*************************************************\n");

    PreTraversal(tree);


    return 0;
}