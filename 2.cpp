#include"bits/stdc++.h"
using namespace std;

class Complex
{
public:
	int a,b;
	friend ostream& operator <<(ostream&, Complex&);
	friend istream& operator >>(istream&, Complex&);
};

ostream& operator <<(ostream& dout,Complex &c)
{
	dout<<c.a<<c.b;
	return dout;
}

istream& operator >>(istream& din,Complex &c)
{
	din>>c.a>>c.b;
	return din;
}

int main(int argc, char const *argv[])
{
	Complex c1,c2;
	cin>>c1;
	cout<<c1;
	return 0;
}