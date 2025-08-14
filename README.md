Operator Overloading

#include<iostream>
using namespace std;
class A1{
	int count;
	public:
		A1()
		{
			count=9;
		}
		void operator ++()
		{
			count=++count;
		}
		void display()
		{
			cout<<"\n Count after overloading="<<count;
		}	
};
int main()
{
	A1 obj;
	++obj;
	obj.display();
}
