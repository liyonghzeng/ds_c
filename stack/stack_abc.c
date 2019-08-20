#include <stdio.h>
#include <stdlib.h>

typedef struct LinkStack
{
    char ch;
    struct LinkStack * next;
}LS;


LS * InitLinkStack()
{
    LS * ls = (LS *)malloc(sizeof(LS));
    ls->next = NULL;
    return ls;
}

void PushLinkStack(LS * ls,char x)
{
    LS * node = (LS *)malloc(sizeof(LS));
    node->ch = x;
    node->next = ls->next;

    ls->next = node;
}

int main()
{

    LS * ls = InitLinkStack();

    int i = 1;
    char c;
    while(i<10)
    {
        printf("输入第%d个字母\n",i);
        scanf("%c",&c);
        getchar();
        PushLinkStack(ls,c);
        i++;
    }

    printf("***********************************\n");


    LS * p = ls->next;
    while(p)
    {
        printf("出栈： %c\n",p->ch);
        p = p->next;
    }

    return 0;

}
