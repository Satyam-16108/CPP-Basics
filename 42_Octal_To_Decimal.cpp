#include<iostream>
#include<math.h>
using namespace std;

	int OctalToDecimal(int n){
			int ans=0;
			int x=1;
			
		while(n>0){
			int lastdigit=n%10;
			ans+=x*lastdigit;
			x*=8;
			n/=10;
		}
		return ans;
	}

int main(){
	int n;
	cin>>n;

	cout<< OctalToDecimal(n) <<endl;
	
	return 0;
}
