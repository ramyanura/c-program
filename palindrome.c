#include<stdio.h>
int main()
{
	int n,rev=0,rem,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}if(t==rev)
	{
		printf("palindrome",rev);
	}else
	{
	printf("not a palindrome",rev);	
	}return 0;
}
