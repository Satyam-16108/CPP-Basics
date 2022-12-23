#include<iostream>
using namespace std;

class base
{
public:
	virtual void print(){
		cout<<"Base Class Print Function"<<endl;
	}
	
	void display(){
		cout<<"Base Class Display Function"<<endl;
	}
};

class derived: public base{
	void print(){
		cout<<"Derived Class Print Function"<<endl;
	}
	
	void display(){
		cout<<"Derived Class Display Function"<<endl;
	}
};

int main()
{
	base *baseptr;
	derived d;
	baseptr = &d;
	
	baseptr -> print();
	baseptr -> display();
	
	return 0;
}
