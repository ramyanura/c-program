#include<stdio.h>
int main(){
int i,n,t,r,f,ans;
scanf("%d",&n);
scanf("%d",&t);
for(i=n+1;i<=t;i++)
{
t=i;
f=0;
while(t!=0)

{
	r=t%10;
	ans=ans+r*r*r;
	t=t/10;

}
printf("%d",ans);
}
return 0;
}
