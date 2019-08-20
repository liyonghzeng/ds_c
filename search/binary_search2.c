//有序表-二分查找
#include <stdio.h>
#include <stdlib.h>

#define MAX 13

typedef int Datatype;

//节点类型
typedef struct NodeType
{
    Datatype key;
    char name[32];
    char email[32];
}Node;


typedef struct BinarySearchTable
{
    Node arr[MAX+1];
    int n;      //元素个数
}BST;

int BinarySearch(BST * bst,Datatype key)
{
    int low = 1;
    int high = bst->n;

    while(low<=high)
    {
        int mid = (low + high) / 2;
        printf("low=%d,high=%d,(low+high)/2=%d\n",low,high,mid);
        if(key == bst->arr[mid].key){
            return mid;
        }else if(key < bst->arr[mid].key){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return 0;
}

int main()
{

    printf("输入有序表长度%d\n\n",MAX);
    BST bst;
    BST * p = &bst;
    //赋值
    Node n1 = {11,"zhangsan11","zhangsan11@qq.com"};
    Node n2 = {22,"zhangsan22","zhangsan22@qq.com"};
    Node n3 = {33,"zhangsan33","zhangsan33@qq.com"};
    Node n4 = {44,"zhangsan44","zhangsan44@qq.com"};
    Node n5 = {55,"zhangsan55","zhangsan55@qq.com"};
    Node n6 = {66,"zhangsan66","zhangsan66@qq.com"};
    Node n7 = {77,"zhangsan77","zhangsan77@qq.com"};
    Node n8 = {88,"zhangsan88","zhangsan88@qq.com"};
    Node n9 = {99,"zhangsan99","zhangsan99@qq.com"};
    Node n10 = {100,"zhangsan100","zhangsan100@qq.com"};
    Node n11 = {111,"zhangsan111","zhangsan111@qq.com"};
    Node n12 = {112,"zhangsan112","zhangsan112@qq.com"};
    Node n13 = {113,"zhangsan113","zhangsan113@qq.com"};
    p->arr[1] = n1;
    p->arr[2] = n2;
    p->arr[3] = n3;
    p->arr[4] = n4;
    p->arr[5] = n5;
    p->arr[6] = n6;
    p->arr[7] = n7;
    p->arr[8] = n8;
    p->arr[9] = n9;
    p->arr[10] = n10;
    p->arr[11] = n11;
    p->arr[12] = n12;
    p->arr[13] = n13;
    p->n = 13;

    printf("***********************************\n");
    int j = 1;
    while(j<=MAX)
    {
        printf("第%d个元素key=%d,name=%s,email=%s\n",j,p->arr[j].key,p->arr[j].name,p->arr[j].email);
        j++;
    }

    printf("********************************\n");

    int k;
    printf("请输入要查找的key： \n");
    scanf("%d",&k);
    int pos = BinarySearch(p,k);        //获取元素位置
    printf("pos=%d,key=%d,name=%s,email=%s\n",pos,p->arr[pos].key,p->arr[pos].name,p->arr[pos].email);



}