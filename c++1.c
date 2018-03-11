#include <iostream>
using namespace std;



	class add
	{
		private:
		int a=5,b=10;
		public:
		int c;
		void addi()
		{
			c=a+b;
			cout<<c<<endl;
		}
	};
	class mul
	{
		private:
		int a1=10,b1=5;
		public:
		int c1;
		void multi()
		{
			c1=a1*b1;
			cout<<c1<<endl;
		}
	};
	class res:public add,public mul
	{
		private:
		int a2=10,b2=10;
		public:
	
		void result()
		{
		cout<<(a2+b2)*(c+c1);
		}
	};
	int main()
	{
		res obj;
		obj.addi();
		obj.multi();
		obj.result();
		return 0;
	}
