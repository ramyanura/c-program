#include<stdio.h>
int main()
{
	int i,count=0;
	char a[50];
	for(i=0;i<=50;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;i<=a[i];i++)
{
	if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
	{
		count++;
	}
}
	printf("%d",count);
	return 0;
}
