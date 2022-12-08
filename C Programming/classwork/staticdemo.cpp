#include<iostream>
using namespace std;

class Staticdemo{
	public:
		static int objcount;
		
		Staticdemo()
		{
			cout<<"\n default constructor called";
			objcount++;
			
		}
};
int Staticdemo::objcount=0;

int main()
{
	Staticdemo sd1,sd2,sd3;
	cout<<"\nthe total object count="<<sd2.objcount;
	return 0;
}
