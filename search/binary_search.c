#include <stdio.h>
#include <stdlib.h>

typedef int Datatype;

int BinarySearch(Datatype arr[],Datatype key)
{
    int low = 0;
    int high = 15;

    while(low <= high)
    {
        printf("low=%d,high=%d\n",low,high);
        int mid = (low+high) / 2;
        printf("mid=%d\n",mid);
        if(key==arr[mid]){
            return mid;
        }else if(key<arr[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return 0;
}

int main()
{

    int low = 0;
    int high = 15;

    printf("low+high=%d,(low+high)/2=%d\n",low+high,(low+high)/2);

    Datatype arr[] = {2,5,9,12,16,19,21,24,26,28,32,36,38,40,46,88};

    for(int i=0;i<16;i++)
    {
        printf("i=%d,v=%d\n",i,arr[i]);
    }

    printf("********************************\n");

    int key;
    printf("请输入要查找的值： \n");
    scanf("%d",&key);
    Datatype pos = BinarySearch(arr,key);
    printf("pos=%d\n",pos);


}