#include<iostream>
using namespace std;

class accept
{
	public:
		string name;
		void getname()
		{
			cout<<" \n enter name:";
			getline(cin,name);
			
		}
		void displayname()
		{
			cout<<"the name is :"<<name;
		}
};
int main()
{
	
	accept obj;
	obj.getname();
	obj.displayname();
	return 0;
	
}