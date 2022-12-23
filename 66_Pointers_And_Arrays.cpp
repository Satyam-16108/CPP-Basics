#include<bits/stdc++.h>
using namespace std;

int main(){
	 
	 int array[]={10,20,30,40,50};
	 int a=2;
	

	ip=&a;
		
	int    *ip;		//integer pointer
	double *dp;     //double pointer
	float  *fp;		//float pouinter
	char   *ch;		//character pointer
	
	cout<<"Variable Value  "<<a<<endl;
	cout<<"Address In Pointer  "<<ip<<endl;
	cout<<"Pointer Pointing to Value  "<<*ip<<endl;
	
	*ip=6;
	
	cout<<"\nVariable Value  "<<a<<endl;
	cout<<"Address In Pointer  "<<ip<<endl;
	cout<<"Pointer Pointing to Value  "<<*ip<<endl;	
	cout<<"\nFor *array - "<<*array<<endl;
	 
	 int *q=array;
	 cout<<"Elements In Array Are - ";
	 for(int i=0;i<5;i++){
	 	cout<<*q<<" ";
	 	q++;
	 }
 	
	cout<<"\nElements In Array Are - ";
	 for(int i=0;i<5;i++){
	 	cout<<*(array+i)<<" ";
	 }
 	
	
	return 0;
}
