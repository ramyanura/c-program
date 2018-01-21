#include<stdio.h>
int main()
{
	int i,n,a;
	scanf("%d",&a);
	scanf("%d",&n);
	for(i=a+1;i<n;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	
	}
	return 0;
}
