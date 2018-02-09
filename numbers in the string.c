#include<stdio.h>
int main()
{
	char ch[100];
	int i,count=0;
	scanf("%[^\n]s",ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='0'&&ch[i]<='9')
		{
			count++;
		}
	}printf("%d",count);
	return 0;
	
}
