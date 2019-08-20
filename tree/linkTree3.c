#include <stdio.h>
#include <stdlib.h>


typedef int Datatype;

//节点类型
typedef struct BTree
{
    Datatype data;
    struct BTree * lchild;      //左指针
    struct BTree * rchild;      //右指针
}BT;

//初始化
void InitBtree(BT * tree)
{
    tree->data = 1;
    tree->lchild = NULL;
    tree->rchild = NULL;
}

void showNode(BT * node)
{
    printf("data=%d\n",node->data);
}


//二叉树的先续遍历
void PreOrderTraversal(BT * tree)
{
    if(tree)
    {
        showNode(tree);
        PreOrderTraversal(tree->lchild);
        PreOrderTraversal(tree->rchild);
    }
    return;
}

//中序遍历
void InOrderTraversal(BT * tree)
{
    if(tree)
    {
        InOrderTraversal(tree->lchild);
        showNode(tree);
        InOrderTraversal(tree->rchild);
    }
    return;
}

//后序遍历
void PostOrderTraversal(BT * tree)
{
    if(tree)
    {
        PostOrderTraversal(tree->lchild);
        PostOrderTraversal(tree->rchild);
        showNode(tree);
    }
    return;
}

int main()
{

    BT * tree = (BT *)malloc(sizeof(BT));
    InitBtree(tree);

    BT * node2 = (BT *)malloc(sizeof(BT));
    node2->data = 2;
    node2->lchild = NULL;
    node2->rchild = NULL;
    tree->lchild = node2;

    BT * node3 = (BT *)malloc(sizeof(BT));
    node3->data = 3;
    node3->lchild = NULL;
    node3->rchild = NULL;
    tree->rchild = node3;


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


    printf("********************先续遍历**************************\n");
    PreOrderTraversal(tree);
    printf("********************中续遍历**************************\n");
    InOrderTraversal(tree);
    printf("********************后续遍历**************************\n");
    PostOrderTraversal(tree);
    return 0;
}



