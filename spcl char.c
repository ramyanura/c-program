#include<stdio.h>
int main()
{
    int i,letters=0,digits=0,spcl=0,space=0;
    char a[100];
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            letters++;
        }
    else if(a[i]>='0'&&a[i]<='9')
    {
        digits++;
    }
    else if(a[i]==' ')
    {
        space++;
    }
else
{
    spcl++;
}
}
printf("%d",spcl);
return 0;
}
