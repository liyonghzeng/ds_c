//静态查找表-顺序表查找

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef char Datatype;

//定义一个节点
typedef struct Member{
    Datatype key;
    char name[32];
    int age;
}M;

//定义静态查找表
typedef struct SearchTable
{
    M node[MAX+1];
    int n;
}ST;

int SearchNode(ST * table,Datatype key)
{
    table->node[0].key = key;
    int i = table->n;
    while(table->node[i].key != key)
    {
        i--;
    }
    return i;
}


int main()
{
    M m1 = {'x',"zhangsan11",11};
    M m2 = {'b',"zhangsan22",22};
    M m3 = {'f',"zhangsan33",33};
    M m4 = {'c',"zhangsan44",44};
    M m5 = {'y',"zhangsan55",55};
    M m6 = {'e',"zhangsan66",66};
    M m7 = {'j',"zhangsan77",77};
    M m8 = {'x',"zhangsan88",88};
    M m9 = {'o',"zhangsan99",99};
    M m10 = {'a',"zhangsan100",100};

    ST table;
    ST * p = &table;
    p->node[1] = m1;
    p->node[2] = m2;
    p->node[3] = m3;
    p->node[4] = m4;
    p->node[5] = m5;
    p->node[6] = m6;
    p->node[7] = m7;
    p->node[8] = m8;
    p->node[9] = m9;
    p->node[10] = m10;
    p->n = 10;



    for(int i=p->n;i>0;i--)
    {
        printf("%d key=%c,name=%s,age=%d\n",i,p->node[i].key,p->node[i].name,p->node[i].age);
    }

    printf("*******************************\n");

    printf("请输入key: ");
    char k;
    scanf("%c",&k);
    int pos = SearchNode(p,k);
    printf("pos=%d\n",pos);
    printf("name=%s,age=%d\n",p->node[pos].name,p->node[pos].age);

}