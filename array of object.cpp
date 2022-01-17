#include<iostream>
using namespace std;
class emp


{
	public:int sal;
	int get()
	{
		cout<<"enter employ ";
		cin>>sal;
	}
};
int main()
{
	emp e[2];
	int i;
	for(i=0;i<2;i++)
	{
		e[i].get();
	}
}




