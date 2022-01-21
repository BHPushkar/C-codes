#include<iostream>
using namespace std;
class P
{
	public:P()
	{
		cout<<"hello ";
		
	}
	~P()
	{
		cout<<"destructor called ";
	}
};
int main()
{
	P o;

}
