#include<bits/stdc++.h>
using namespace std;

int main(){
	 
	 int size;
	 int *ptr;
	 
	 cout<<"Enter Size Of Array -> ";
	 cin>>size;
	 
	 ptr=new int[size];
	 cout<<"Enter Values To Be Stored In Array -> "<<endl;
	 
	 for(int i=0;i<size;i++){
	 	cin>>ptr[i];
	 }
	 
	 cout<<"Values In Array Are ->"<<endl;
	 for(int i=0;i<size;i++){
	 	cout<<ptr[i]<<endl;
	 }
	 
	return 0;
}
