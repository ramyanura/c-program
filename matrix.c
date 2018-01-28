#include <stdio.h>

int main(void) {
	int a[10][10],b[10][10],c[10][10],i,j;
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
	
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
	c[i][j]=a[i][j]+b[i][j];
	printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

