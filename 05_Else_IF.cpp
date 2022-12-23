#include<iostream>
using namespace std;
int main()
{
	int savings;
	cin>>savings;
	
	if(savings>5000){
	cout<<"Go To Restaurant \n";
	}
	else if(savings>2000){
	cout<<"Go To Dominos \n";
	}
	else{
		cout<<"Go To BTW \n";
}
	
	return 0;
}
