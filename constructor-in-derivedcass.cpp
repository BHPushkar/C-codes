#include<iostream>
using namespace std;
class P
{
	public:int x;
	P(int a)
	{
		x=a;
		cout<<x<<endl;
	}
};
class Q
{
	public:int y;
	Q(int b)
	{
		y=b;
		cout<<y<<endl;
	}
};

class R : public P,public Q
{
	public:int m,n;
	R(int a,int b,int c,int d):P(a),Q(b)
	{
		m=c;
		n=d;
		cout<<m<<endl<<n<<endl;
	}
};
int main()
{
	R h(10,20,30,40);
}
