#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int c,d;
    scanf("%s",&a);
    scanf("%s",&b);
    c=strlen(a);
    d=strlen(b);
    if(c>d)
    {
        printf("%s",a);
    }else
    {
        printf("%s",b);
    
    }return 0;
    
}
