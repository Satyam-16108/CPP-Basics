#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int currsum=0;
	int maxsum=INT_MIN;
	
	for (int i=0;i<n;i++){
		currsum+= array[i];
		if(currsum<0){
			currsum=0;
		}
			maxsum=max(maxsum,currsum);
	}
	
	cout<<maxsum;
	return 0;
}
