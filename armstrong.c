#include<stdio.h>
int main(){
int n,t,r,ans=0;
scanf("%d",&n);
t=n;
while(n!=0)
{
	r=n%10;
	ans=ans+r*r*r;
	n=n/10;

}if(t==ans)
{
	printf("armstrong",n);
}else
{
	printf("not armstrong",n);
}
return 0;
}
