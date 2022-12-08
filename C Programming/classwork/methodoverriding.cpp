#include<iostream>
using namespace std;

class A{
	public:
		
	void show()
{
	cout<<"\n show from A.";
	
}
};
class B:public A
{
	public:
		void show()
		{
			A::show();
			cout<<"\nshow from B.";
			
		}
	
};
class C:public B
{
	public:
		void show()
		{
			B::show();
			cout<<"\nshow from C.";
		}
};




int main()
{
	C obj;
	obj.show();
	return 0; 
}