#include<stdio.h>

int main()
{
 char a[50];
 int al=0,nu=0,i;

 gets(a);
  for(i=0;a[i]!='\0';i++)
 {
 if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
 {
 	al++;
 }
 else if(a[i]>='0'&&a[i]<='9')
 {
 	nu++;
 }
 }
 if((al>0)&&(nu>0))
 {
 	printf("yes");
 }else
 {
 	printf("no");
 }
 return 0;
}
