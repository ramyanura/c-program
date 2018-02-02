
#include <stdio.h>
int main()
{
	int i,j,t;
	scanf("%d",&i);
	scanf("%d",&j);
	t=i;
	i=j;
	j=t;
	printf("%d",i);
	printf("%d",j);
	return 0;
}
