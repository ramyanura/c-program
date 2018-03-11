#include <iostream>
using namespace std;

class marks
{
	public:
	int a,b,c,d,e;
	void mark()
	{
		cin>>a>>b>>c>>d>>e;
		cout<<a<<"\t";
		cout<<b<<"\t";
		cout<<c<<"\t";
		cout<<d<<"\t";
		cout<<e<<"\t"<<endl;
	}
};
class total:public marks
{
	public:
	int t;
	void tot()
	{
		t=a+b+c+d+e;
		cout<<"total:"<<t<<endl;
	}
};
class average:public total
{
	public:
	int av;
	void avg()
	{
		av=t/5;
		cout<<"average:"<<av;
	}
};
int main()
{
	average obj;
	obj.mark();
	obj.tot();
	obj.avg();
	return 0;
}
