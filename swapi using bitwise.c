#include<stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&a);
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d\t",a);
	printf("%d\t",b);
	return 0;
}
