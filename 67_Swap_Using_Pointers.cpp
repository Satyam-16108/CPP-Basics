#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	 
	 int a,b;
	 cout<<"Enter Value Of A - ";
	 cin>>a;
	 cout<<"\nEnter Value Of B - ";
	 cin>>b;
	 cout<<endl;
	
	
	swap(&a,&b);
	cout<<"Value Of A & B is - "<<a<<"  "<<b<<endl;
	
	return 0;
}
