#include<stdio.h>
int main()
{
  int a[19],i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
  	printf("%d\t",a[i]);
  	printf("%d\n",i);
  }return 0;
}
