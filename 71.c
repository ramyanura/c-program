#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	int n,i,j,b=0;
	scanf("%s",&a);
	n=strlen(a);
	for(i=0,j=n-1;i<=n/2;i++,j--)
	{
		if(a[i]!=a[j])
		{
			b++;
		}
	}
	if(b==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
