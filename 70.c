#include<stdio.h>
int main()
{
	int n,i,a=1,b=2,c=0;
	scanf("%d",&n);
while(n!=0)
{
n=n/2;
c++;
}
for(i=0;i<c;i++)
{
	a=a*b;
}
printf("%d",a);
return 0;
}
