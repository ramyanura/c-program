#include<stdio.h>
int main()
{
    int n,b=0;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        b++;
        
    }
    printf("%d",b);
    return 0;
}
