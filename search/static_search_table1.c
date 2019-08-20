//顺序表-静态查找
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

//节点类型
typedef struct NodeType
{
    char key;
    int orderid;
}Node;

typedef struct SearchTable
{
    Node arr[MAX+1];
    int n;
}ST;


//查找
int SearchSeqTable(ST * st,char key)
{
    int i = st->n;
    st->arr[0].key = key;

    while(st->arr[i].key!=key)
    {
        i--;
    }
    return i;
}


int main()
{

    ST st;
    ST * p = &st;

    printf("表长：%d\n",MAX);

    int i=1;
    while(i<=MAX)
    {
        printf("请输入第%d个元素key(char): \n",i);
        char k;
        scanf("%c",&k);
        getchar();
        p->arr[i].key = k;

        printf("请输入第%d个元素的orderid:\n",i);
        int oid;
        scanf("%d",&oid);
        getchar();
        p->arr[i].orderid = oid;
        i++;
    }

    p->n = MAX;

    printf("************************************\n");
    int j = 1;
    while(j<=MAX)
    {
        printf("arr[%d].key=%c,oriderid=%d\n",j,p->arr[j].key,p->arr[j].orderid);
        j++;
    }

    printf("************************************\n");

    printf("请输入key: \n");
    char sk;
    scanf("%c",&sk);
    int pos = SearchSeqTable(p,sk);
    printf("查找的位置pos=%d,key=%c,orderid=%d\n",pos,p->arr[i].key,p->arr[i].orderid);

    return 0;
}


