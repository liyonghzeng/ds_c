  //二叉排序树 Binary Sort Tree
#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;

typedef struct BinarySortTree
{
    Datatype data;
    struct BinarySortTree * lchild;
    struct BinarySortTree * rchild;
}BST;



BST * CreateBST()
{
    BST * bst = (BST *)malloc(sizeof(BST));
    bst->data = 38;
    bst->lchild = NULL;
    bst->rchild = NULL;
    return bst;
}

void showNode(BST * tree)
{
    printf("Node=%d\n",tree->data);
}

//中序遍历
void InOrder(BST * tree)
{
    BST * p = tree;
    if(p)
    {
        InOrder(p->lchild);
        showNode(p);
        InOrder(p->rchild);
    }
    return;
}


/*
    查找：
    递归查找 键值等于key的节点
*/

BST * SearchBST(BST * tree,Datatype key)
{
    if(tree==NULL){
        return NULL;
    }else if(key==tree->data){
        return tree;
    }else if(key<tree->data){
        SearchBST(tree->lchild,key);
    }else{
        SearchBST(tree->rchild,key);
    }
}

/*
    插入新节点
*/
int InsertBST()
{

}

int main()
{
    BST * tree = CreateBST();


    //创建节点
    BST * node2 = (BST *)malloc(sizeof(BST));
    node2->data = 18;
    node2->lchild = NULL;
    node2->rchild = NULL;
    tree->lchild = node2;

    BST * node3 = (BST *)malloc(sizeof(BST));
    node3->data = 50;
    node3->lchild = NULL;
    node3->rchild = NULL;
    tree->rchild = node3;

    BST * node4 = (BST *)malloc(sizeof(BST));
    node4->data = 7;
    node4->lchild = NULL;
    node4->rchild = NULL;
    node2->lchild = node4;

    BST * node5 = (BST *)malloc(sizeof(BST));
    node5->data = 30;
    node5->lchild = NULL;
    node5->rchild = NULL;
    node2->rchild = node5;

    BST * node6 = (BST *)malloc(sizeof(BST));
    node6->data = 76;
    node6->lchild = NULL;
    node6->rchild = NULL;
    node3->rchild = node6;

    BST * node7 = (BST *)malloc(sizeof(BST));
    node7->data = 20;
    node7->lchild = NULL;
    node7->rchild = NULL;
    node5->lchild = node7;

    BST * node8 = (BST *)malloc(sizeof(BST));
    node8->data = 35;
    node8->lchild = NULL;
    node8->rchild = NULL;
    node5->rchild = node8;

    BST * node9 = (BST *)malloc(sizeof(BST));
    node9->data = 70;
    node9->lchild = NULL;
    node9->rchild = NULL;
    node6->lchild = node9;

    InOrder(tree);

    printf("****************************************\n");


    while(1)
    {
        int k = 0;
        printf("请输入要查找的key ");
        scanf("%d",&k);
        BST * node = SearchBST(tree,k);
        printf("node=%d\n",node->data);
    }

    return 0;
}

