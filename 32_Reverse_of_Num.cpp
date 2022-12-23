#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter The Number You Want To Reverse -  ";
	cin>>n;
	
int reverse=0;
while(n>0){
	int lastdigit=n%10;
	reverse=reverse*10 + lastdigit;
	n=n/10;
}
	cout<<"Reverse Of The Number Is -  "<<reverse;
	
	return 0;
}
