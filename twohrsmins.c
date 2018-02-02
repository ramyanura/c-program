#include<stdio.h>
int main()
{
	int a,b,n,m,e,f,c,d;
	scanf("%d",&n);
	scanf("%d",&m);
	a=n/60;
	b=n%60;
	c=m/60;
	d=m%60;
	e=a-c;
	f=b-d;
	printf("%d",e);
	printf("%d",f);
	return 0;
}
