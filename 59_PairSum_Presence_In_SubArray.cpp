#include<bits/stdc++.h>
using namespace std;

bool pairsum(int array[], int n , int k){
	
	int low=0;
	int high=n-1;
	
	while(low<high){
		if(array[low]+array[high]==k){
		cout<<"Elements At Position "<<low<<" & "<<high<<endl;
		return true;
		}
		else if(array[low]+array[high]>k){
			high--;
		}
		else{
			low++;
		}
	}
	return false;
}

int main(){
	int n;
	cout<<"Enter Length OF Array - ";
	cin>>n;
	cout<<"Enter Terms In Array In Sorted Order - ";
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int k;
	cout<<"Enter The Key To Find - ";
	cin>>k;
	
	cout<<pairsum(array,n,k)<<endl;
	
	return 0;
}
