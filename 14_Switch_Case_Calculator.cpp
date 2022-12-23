#include<iostream>
using namespace std;
int main(){
	
	float n1,n2;
	cout<<"Enter the first No.-";
	cin>>n1;
	cout<<endl;
	cout<<"Enter the second No.-";
	cin>>n2;
	cout<<endl;
	
	char op;                  			
	cout<<"Enter The Operation You Would Like To Perform-";
	cin>>op;
	cout<<endl;
	
	switch (op){
	case '+':
		cout<<n1+n2;
		break;
	case '-':
		cout<<n1-n2;
		break;
	case '*':
		cout<<n1*n2;
		break;
	case '/':
		cout<<n1/n2;
		break;
	default :
		cout<<"Please Enter Valid operator\n";
		break;
	}
	
	return 0;
}
