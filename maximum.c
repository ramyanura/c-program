#include <stdio.h>

int main()
{
int i,b,max,a[10];
scanf("%d",&b);
for(i=0;i<b;i++)
{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<b;i++)

if(max<a[i])
max=a[i];
{
 printf("%d",max);
}
return 0;
}

