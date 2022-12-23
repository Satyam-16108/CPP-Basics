#include<bits/stdc++.h>
using namespace std;

class KMV{
public:
	void fun(){
		cout<<"Function With No Arguments"<<endl;
	}
	
	void fun(int x){
		cout<<"Function With Int Argument"<<endl;
	}
	
	void fun(double x){
		cout<<"Function With double Argument"<<endl;
	}
};

int main()
{
	KMV obj;
	obj.fun();
	obj.fun(4);
	obj.fun(6.8);
	
	
	return 0;
}
