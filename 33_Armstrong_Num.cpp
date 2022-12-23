#include<iostream>
#include<cmath>
using namespace std;

// (ARMSTRONG NUMBER) Addition of cube of all number in a term gives the same number eg-153

int main(){
	int n;
	cin>>n;
	
int sum=0;
int original=n;    //At last n will be 0 so store its value in another variable
while(n>0){
	int lastdigit=n%10;
	sum+= pow(lastdigit,3);
	n=n/10;
}
 if(sum=original){
 	cout<<"An Armstrong Number";
 }
 else{
 	cout<<"Not An Armstromg Number";
 }
	return 0;
}
