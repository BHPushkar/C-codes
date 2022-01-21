#include<iostream>
using namespace std;
class P
{
	public:int x;
	P(int i)
	{
		x=i;
		cout<<x;
	}
	P(P &i)
	{
		x=i.x;
		cout<<x;
	}
};
int main()
{
	P o(5);
	P b(o);
}
