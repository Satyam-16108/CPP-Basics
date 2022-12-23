#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<algorithm>
#include<climits>
using namespace std;

string DecimalToHexadecimal(int n){
			int x=1;
			string ans="";
			
			while(x<=n){
				x*=16;
			}
			x/=16;
			
			while(x>0){
				int bin=n/x;
				n-=bin*x;
				x/=16;
			
				if(bin<=9)
					ans += to_string(bin);
				
				else
				{char c= 'A'+ bin - 10;
				ans.push_back(c);
				}
			
			}
		 return ans;
	}

int main(){
	int n;
	cin>>n;

	cout<<DecimalToHexadecimal(n) <<endl;
	
	return 0;
}
