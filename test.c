#include <stdio.h>
#include <stdlib.h>

int main()
{

	int num = 0;
	printf("num=%d\n",num);

	int j=0;
	for(int i=1;i<=100;i++)
	{
	    if(i%2==0){
	        j++;
	    }
	}

	printf("j=%d\n",j);

	return 0;
}
