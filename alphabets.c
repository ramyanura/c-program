#include<stdio.h>
main()
{
char ch;
scanf("%s",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
	printf("alphabets");

}else
{
	printf("not");
}
}
