#include<iostream>
using namespace std;
int main(){
	int a,b,i;
	cin>>a>>b;
	
	for(int num=a;num<=b;num++){
		for(i=2;i<num;i++){
			if(num%i==0){
				continue;
			}
		}
	if(i==num)
	cout<<num<<" ";	
		
	}
		
	return 0;
}
