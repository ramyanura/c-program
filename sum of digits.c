#include<stdio.h>
int main()
{
    int n,t=0,y;
    scanf("%d",&n);
    while(n!=0)
    {
        y=n%10;
        t=t+y;
        n=n/10;
        
   
    
    } printf("%d",t);
    
    return 0;
    
    
}
