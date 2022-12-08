#include<iostream>
using namespace std;

int func1()
{
	return 20;
	
}
int func1(int a)
{
	if(a%2==0)
	{
		cout<<"even no.";
		return a;
	}
	else
	{
		cout<<"odd no.";
		return a;
		
	}
}
void func1(int b1,int b2)
{
	int add=b1+b2;
	cout<<"addition is :"<<add;
}

int main()
{
    cout<<func1();
	cout<<func1(15);
	func1(22,27);
	
	return 0;
}