#include<iostream>
using namespace std;
int main()
{
	int savings;
	cin>>savings;
	
	if(savings<800){
		cout<<"Go To Splash Water Park\n";
		if(savings<500){
			cout<<"In Murthal\n";
		}
		else{
			cout<<"In Panipat\n";
		}
	}
	
    else if(savings>800){
			cout<<"Go To Dominos\n";
 
	}
	
	else{
		cout<<"Go TO Taj Hotel\n";
	}
	
	return 0;
}
