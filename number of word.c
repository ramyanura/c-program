#include<stdio.h>
int main()
{
	int i,count=1;
	char a;
	scanf("%[^\n]s",&a);
	for(i=0;i<=a;i++)
{
	if(a[i]==' ')
	{
      count++;
	}
}
	printf("%d",count);
	return 0;
}
