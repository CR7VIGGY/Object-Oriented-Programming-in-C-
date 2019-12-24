#include"bits/stdc++.h"
using namespace std;

class Student
{
private:
	int marks;
public:
	string name;
	int roll;

	Student()
	{
		marks = 0;
		roll = 999;
		name = "abc";
	}

	void get_data()
	{
		cout<<"Enter Name : "; cin>>name;
		cout<<"Enter Roll : "; cin>>roll;
		cout<<"Enter Marks : ";cin>>marks;
	}
	void display_data();
	Student getsum(Student);
};

void Student :: display_data()
{
	cout<<name<<" "<<roll<<" "<<marks<<endl;
}

Student Student ::getsum(Student b)
{
	Student temp;
	temp.marks = marks + b.marks;

	return temp;
}

int main(int argc, char const *argv[])
{
	/*
	Student s[2];
	s[0].get_data();
	s[0].display_data();
	s[1].display_data();

	Student g(s[0]); //copy constructor or we can use Student g = s[0];
	g.display_data();
	*/

	Student a,b;
	a.get_data();
	b.get_data();

	Student c = a.getsum(b); //returning object from a member function
	c.display_data();

	return 0;
}