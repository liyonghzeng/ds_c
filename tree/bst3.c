/*
    二叉排序树的插入算法
*/

#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;

typedef struct btnode
{
    Datatype key;
    struct btnode * lchild;
    struct btnode * rchild;
}BSTNode,*BinTree;


//初始化BST
BinTree CreateBST()
{
   BinTree tree = (BSTNode *)malloc(sizeof(BSTNode));
   tree->key = 38;
   tree->lchild = NULL;
   tree->rchild = NULL;
   return tree;
}

void ShowNode(BinTree node)
{
    printf("node->key=%d\n",node->key);
}



//中序遍历  左 -》 根 -》 右
void InorderTrav(BinTree tree)
{
    BinTree p = tree;
    if(p==NULL){
        return;
    }else{
        InorderTrav(p->lchild);
        ShowNode(p);
        InorderTrav(p->rchild);
    }
    return;
}



int main()
{

    BinTree bst;
    bst = CreateBST();


    BinTree node2 = (BSTNode *)malloc(sizeof(BSTNode));
    node2->key = 18;
    node2->lchild = NULL;
    node2->rchild = NULL;
    bst->lchild = node2;

    BinTree node3 = (BSTNode *)malloc(sizeof(BSTNode));
    node3->key = 50;
    node3->lchild = NULL;
    node3->rchild = NULL;
    bst->rchild = node3;


    BinTree node4 = (BSTNode *)malloc(sizeof(BSTNode));
    node4->key = 7;
    node4->lchild = NULL;
    node4->rchild = NULL;
    node2->lchild = node4;

    BinTree node5 = (BSTNode *)malloc(sizeof(BSTNode));
    node5->key = 30;
    node5->lchild = NULL;
    node5->rchild = NULL;
    node2->rchild = node5;

    BinTree node6 = (BSTNode *)malloc(sizeof(BSTNode));
    node6->key = 76;
    node6->lchild = NULL;
    node6->rchild = NULL;
    node3->rchild = node6;

    BinTree node7 = (BSTNode *)malloc(sizeof(BSTNode));
    node7->key = 20;
    node7->lchild = NULL;
    node7->rchild = NULL;
    node5->lchild = node7;

    BinTree node8 = (BSTNode *)malloc(sizeof(BSTNode));
    node8->key = 35;
    node8->lchild = NULL;
    node8->rchild = NULL;
    node5->rchild = node8;

    BinTree node9 = (BSTNode *)malloc(sizeof(BSTNode));
    node9->key = 70;
    node9->lchild = NULL;
    node9->rchild = NULL;
    node6->lchild = node9;


    /*
        bst 树根节点
        key 要查找的位置
        t 当前根节点位置
        pos 保存最后查找到的位置
    */
    BinTree SearchBST(BinTree bst,Datatype key,BinTree t,BSTNode * pos)
    {
        if(bst==NULL)
        {
            *pos = *t;
            return NULL;
        }else if(key == bst->key){
            *pos = *bst;
            return bst;
        }else if(key < bst->key){
            SearchBST(bst->lchild,key,bst,pos);
        }else{
            SearchBST(bst->rchild,key,bst,pos);
        }
    }



    int InsertBST(BinTree bst,Datatype key)
    {
        BinTree f;
        BSTNode * p;

        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
        InorderTrav(bst);

        //SearchBST(tree,key,f,p);
        printf("ppppppp->key=%d\n",p->key);

//        BSTNode * i_node = (BSTNode *)malloc(sizeof(BSTNode));
//        i_node->key = key;
//        i_node->lchild = NULL;
//        i_node->rchild = NULL;
//
//        if(key<p->key){     //放在p的左边
//            p->lchild = i_node;
//        }else if(key>p->key){   //放在 p的右边
//            p->rchild = i_node;
//        }else{
//            return 0;
//        }
//        return 1;
    }

    InorderTrav(bst);
    printf("*********************************\n");
    BSTNode * f;
    BSTNode * p;
    Datatype node = 40;
    printf("插入节点： node=%d\n",node);


    //查找位置
    SearchBST(bst,node,f,p);
    printf("最后查找位置 p->key=%d\n",p->key);
    //BSTNode * i_node = (BSTNode *)malloc(sizeof(BSTNode));
//    i_node->key = node;
//    i_node->lchild = NULL;
//    i_node->rchild = NULL;
//    if(node < p->key){
//        p->lchild = i_node;
//    }else if(node > p->key){
//        p->rchild = i_node;
//    }
//    InorderTrav(bst);


    //插入节点
//    InsertBST(bst,node);
//    printf("*********************************\n");
//    InorderTrav(bst);


    return 0;
}
