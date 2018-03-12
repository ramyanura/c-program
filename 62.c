#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int c=0,i,m;
    scanf("%s",&ch);
    m=strlen(ch);
    for(i=0;ch[i]!='\0';i++)
    {
    if(ch[i]=='0'||ch[i]=='1')
    {
        c++;
        
    }
    	
    }
    if(c==m)
    {
    	printf("yes");
    	}
    	else
    {
        printf("no");
    }
    return 0;
}
