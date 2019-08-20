#include <stdio.h>
#include <stdlib.h>

#define MAX 5


//求双亲


//求左孩子


//求右孩子


int main()
{
    char arr[MAX];

    int i=0;
    char c;
    while(i<MAX)
    {
        printf("请输入：\n");
        scanf("%c",&c);         //从键盘获取输入
        getchar();
        printf("输入的值为%c\n",c);
        arr[i] = c;
        i++;

    }

    printf("*********************\n");
    int j = 0;
    while(j<MAX)
    {
        printf("输入的字符为：%c\n",arr[j]);
        j++;
    }

    return 0;

}