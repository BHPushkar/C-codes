#include<iostream>
using namespace std;
class pqr

{
	private:int a,b,c,d;
	public :void numeric()
	{
		cout<<"enter first number ";
		cin>>a;
		
		cout<<"enter second number ";
		cin>>b;
		 c=a+b;
		 
		 cout<<"the addiion of two numbers is "<<c;
	}
};
int main()
{
	pqr o;
	o.numeric();
}
