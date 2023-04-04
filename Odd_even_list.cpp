#include<stdio.h>
int main()
{
	int i,n,flag=0;
	printf("Enter your limit :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			flag = 1;
			break;
			printf("\n%d is a even number.",i);
		}
		else
		{
			flag = 0;
			printf("\n%d is a odd number.",i);
		}
	}
	return 0;
}
