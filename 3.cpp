#include"bits/stdc++.h"
using namespace std;

class A
{
public:
	void f1()
	{
		cout<<"f1 of class A is called"<<endl;
	}
	virtual void f2()
	{
		cout<<"f2 of class A is called"<<endl;
	}
	virtual void f3()
	{
		cout<<"f3 of class A is called"<<endl;
	}
	virtual void f4()
	{
		cout<<"f4 of class A is called"<<endl;
	}

};

class B :public A
{
public:
	void f2()
	{
		cout<<"f2 of class B is called"<<endl;
	}
	void f1()
	{
		cout<<"f3 of class B is called"<<endl;
	}
	void f4(int x)
	{
		cout<<"f4 of class B is called"<<endl;
	}
};

int main(int argc, char const *argv[])
{
	A *p;
	B o2;
	p = &o2;
	p->f1();
	p->f2();
	p->f3();
	p->f4();
	//p->f4(5);
	return 0;
}