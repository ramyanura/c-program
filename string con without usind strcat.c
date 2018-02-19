#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,c,d;
    scanf("%s",&a);
    scanf("%s",&b);
    c=strlen(a);
    d=strlen(b);
    for(i=0;i<d;i++)
    {
        a[c]=b[i];
        c++;
  
    }
    printf("%s",a);

    
    return 0;
    
}
