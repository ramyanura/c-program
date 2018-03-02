#include<stdio.h>
int main()
{
   int i,j,a[50],t,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=1;i<=n;i++)
   {
   	for(j=i+1;j<=n;j++)
   	{
   		if(a[i]>a[j])
   		{
   			t=a[i];
   			a[i]=a[j];
   			a[j]=t;
   		}
   		
   	}
   }printf("%d",a[n]);
   return 0;
}
