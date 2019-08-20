#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct NodeType
{
    int key;
    int age;
}Node;


typedef struct SearchTable
{
    Node arr[MAX+1];
    int  n;
}ST;


//静态查找
int SearchSeqTable(ST * st,int key)
{
    st->arr[0].key = key;
    int i = st->n;

    while( st->arr[i].key != key)
    {
        i--;
    }
    return i;
}


int main()
{


    ST st;
    ST * p = &st;
    int i=1;

    printf("表长%d\n\n",MAX);
    while(i<=MAX)
    {
        printf("请输入%d个元素中的第%d个key(int):\n",MAX,i);
        int key;
        scanf("%d",&key);
        getchar();
        p->arr[i].key = key;


        printf("请输入%d个元素中的第%d个age:\n",MAX,i);
        int age;
        scanf("%d",&age);
        getchar();
        p->arr[i].age = age;
        p->n = i;
        i++;
    }

    printf("*****************************\n");
    int j = 1;
    while(j<=MAX)
    {
        printf("arr[%d] key=%d age=%d\n",j,p->arr[j].key,p->arr[j].age);
        j++;
    }

    printf("请输入key(int): \n");
    int sk;
    scanf("%d",&sk);

    int pos = SearchSeqTable(p,sk);
    printf("pos=%d,key=%d,age=%d\n",pos,p->arr[pos].key,p->arr[pos].age);
    return 0;
}



