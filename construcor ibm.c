#include <iostream>

using namespace std;
class num
{
public:

 num()
{
    int n,i,f=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<f<<endl;
}
num(int a,int b)
{
int c;
cin>>a>>b;
c=a+b;
cout<<c;
}
};
int main()
{
num h;                                                                                     
   num o(2,3);
   
   return 0;
}
