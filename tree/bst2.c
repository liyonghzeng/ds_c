#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;

typedef struct BinarySortTree
{
    Datatype key;
    struct BinarySortTree * lchild;
    struct BinarySortTree * rchild;
}BST;


//初始化BST
BST * CreateBST()
{
   BST * tree = (BST *)malloc(sizeof(BST));
   tree->key = 38;
   tree->lchild = NULL;
   tree->rchild = NULL;
   return tree;
}

void ShowNode(BST * node)
{
    printf("node->key=%d\n",node->key);
}



//中序遍历  左 -》 根 -》 右
void InorderTrav(BST * tree)
{
    BST * p = tree;
    if(p==NULL){
        return;
    }else{
        InorderTrav(p->lchild);
        ShowNode(p);
        InorderTrav(p->rchild);
    }
    return;
}


//查找
BST * SearchBST(BST * bst,Datatype key)
{
    if(bst==NULL)
    {
        return NULL;
    }else if(key == bst->key)
    {
        return bst;
    }
    else if(key < bst->key)
    {
        SearchBST(bst->lchild,key);
    }else if(key > bst->key)
    {
        SearchBST(bst->rchild,key);
    }
}


int main()
{

    BST * bst = CreateBST();


    BST * node2 = (BST *)malloc(sizeof(BST));
    node2->key = 18;
    node2->lchild = NULL;
    node2->rchild = NULL;
    bst->lchild = node2;

    BST * node3 = (BST *)malloc(sizeof(BST));
    node3->key = 50;
    node3->lchild = NULL;
    node3->rchild = NULL;
    bst->rchild = node3;


    BST * node4 = (BST *)malloc(sizeof(BST));
    node4->key = 7;
    node4->lchild = NULL;
    node4->rchild = NULL;
    node2->lchild = node4;

    BST * node5 = (BST *)malloc(sizeof(BST));
    node5->key = 30;
    node5->lchild = NULL;
    node5->rchild = NULL;
    node2->rchild = node5;

    BST * node6 = (BST *)malloc(sizeof(BST));
    node6->key = 76;
    node6->lchild = NULL;
    node6->rchild = NULL;
    node3->rchild = node6;

    BST * node7 = (BST *)malloc(sizeof(BST));
    node7->key = 20;
    node7->lchild = NULL;
    node7->rchild = NULL;
    node5->lchild = node7;

    BST * node8 = (BST *)malloc(sizeof(BST));
    node8->key = 35;
    node8->lchild = NULL;
    node8->rchild = NULL;
    node5->rchild = node8;

    BST * node9 = (BST *)malloc(sizeof(BST));
    node9->key = 70;
    node9->lchild = NULL;
    node9->rchild = NULL;
    node6->lchild = node9;


    printf("root key=%d\n",bst->key);
    printf("bst->lchild=%d\n",bst->lchild->key);
    printf("bst->rchild=%d\n",bst->rchild->key);

    printf("*********************************\n");
    InorderTrav(bst);
    printf("*********************************\n");
    BST * pos = SearchBST(bst,35);
    printf("pos->key=%d\n",pos->key);

    while(1)
    {
        int k;
        printf("请输入要查找的key \n");
        scanf("%d",&k);
        BST * pos = SearchBST(bst,k);
        printf("pos->key=%d\n",pos->key);
    }

    return 0;
}
