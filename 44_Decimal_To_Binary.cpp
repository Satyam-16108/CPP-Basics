#include<bits/stdc++.h>
using namespace std;

	int DecimalToBinary(int n){
			int ans=0;
			int x=1;
			
			while(x<=n){
				x*=2;
			}
			x/=2;
			
			while(x>0){
			int bin=n/x;
			n-=bin*x;
			x/=2;
			ans=ans*10 + bin;
			}
		return ans;
	}

int main(){
	int n;
	cin>>n;

	cout<<DecimalToBinary(n) <<endl;
	
	return 0;
}
