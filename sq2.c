#include <stdio.h>

int main()
{

    int MaxSize = 10;       //最大表长 10

    // 1 定义 Person 结构体 别名 P
    struct Person{
        char name[128];
        int age;
        char email[128];
    };
    typedef struct Person P;

    // 2 定义 顺序表 别名 Seq
    struct SeqList {
        P data[10];         // 元素 数据类型为 P
        int length;         // 标识 线性表的长度
    };
    typedef struct SeqList Seq;


    //定义顺序表变量 SL 并赋值
    Seq SL = {{
            {"zhangsan111",11,"zhangsan111@qq.com"},
            {"zhangsan222",22,"zhangsan222@qq.com"},
            {"zhangsan333",33,"zhangsan333@qq.com"},
            {"zhangsan444",44,"zhangsan444@qq.com"},
            {"zhangsan555",55,"zhangsan555@qq.com"},
    },5};

	//定义 定位函数
	int LocateSeqList(Seq * L,P x)
	{
		int i = 0;
		while(i<L->length)
		{
			//printf("name: %s\n",L->data[i].name);
			if(x == L->data[i])
			{ return i+1; }
			i++;
		}
		return 0;
	}

	


    //定义 插入运算函数
    void InsertSeqList(Seq * pL,P px,int i)
    {
        if(pL->length==MaxSize){
            printf("表已满\n");
        }

        if(i<1 || i>pL->length+1){
            printf("位置错误\n");
        }

        // 移动位置
        for(int j=pL->length;j>=i;j--)
        {
            pL->data[j] = pL->data[j-1];
        }

        pL->data[i-1] = px;     //将新元素插入 指定位置
        pL->length++;           // 表长 +1

    }


    for(int i=0;i<MaxSize;i++)
    {
        printf("p%d's name:%s,p%d's age:%d,p%d's email:%s\n",i,SL.data[i].name,i,SL.data[i].age,i,SL.data[i].email);
    }
    printf("表长: %d\n",SL.length);

    printf("*****************************************************\n");
    P px = {"xxx",100,"xxx@xx.xx"};
    InsertSeqList(&SL,px,3);

	P px1 = {"zhangsan222",22,"zhangsan222@qq.com"};
	int pos = LocateSeqList(&SL,px1);
	printf("Pos: %d\n",pos);


    for(int i=0;i<MaxSize;i++)
    {
        printf("p%d's name:%s,p%d's age:%d,p%d's email:%s\n",i,SL.data[i].name,i,SL.data[i].age,i,SL.data[i].email);
    }
    printf("表长: %d\n",SL.length);

    return 0;

}
