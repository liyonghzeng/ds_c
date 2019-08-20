#include <stdio.h>

int main()
{


    char name[64];
    int age;


    printf("请输入姓名：\n");
    scanf("%s",name);
    printf("请输入年龄：\n");
    scanf("%d",&age);


    printf("姓名为：%s，年龄：%d\n",name,age);


    return 0;
}