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

//先续遍历
/*
*   先访问根节点，再访问左子树，再访问右子树
*
*/
void PreTraversal(BT * bt)
{

    if(bt){
        showNode(bt);
        PreTraversal(bt->lchild);
        PreTraversal(bt->rchild);
    }
    return;
}

//中序遍历
void InTraversal(BT * bt)
{
    if(bt)
    {
        InTraversal(bt->lchild);
        showNode(bt);
        InTraversal(bt->rchild);
    }
    return;
}

//后续遍历
void PostTraversal(BT * bt)
{
    if(bt)
    {
        PostTraversal(bt->lchild);
        PostTraversal(bt->rchild);
        showNode(bt);
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


    printf("*****************先续遍历********************************\n");
    PreTraversal(tree);
    printf("******************中序遍历*******************************\n");
    InTraversal(tree);
    printf("******************后续遍历*******************************\n");
    PostTraversal(tree);
    return 0;
}