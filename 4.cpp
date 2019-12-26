#include"bits/stdc++.h"
using namespace std;

template <class Type>
class Square
{
private:
	Type n;

public:
	Type sq(Type x)
	{
		n = x;
		return n*n;
	}
	Type sqrt(Type x);
};

template<class Type>
Type Square<Type> :: sqrt(Type x)
{
	n = x;
	return pow(n,0.5);
}

int main(int argc, char const *argv[])
{
	Square<int> a;
	Square<double> b;

	cout<<a.sq(4)<<endl;
	cout<<b.sq(3.5678)<<endl;

	cout<<a.sqrt(4)<<endl;
	cout<<b.sqrt(3.5678)<<endl;
	return 0;
}