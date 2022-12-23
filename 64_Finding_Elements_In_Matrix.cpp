#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,target;
	cout<<"Input The Row & Column Size Of Matrix - ";
	cin>>n>>m;
	cout<<endl;
	
	int matrix[n][m];
	cout<<"Enter The Matrix In Sorted Order- \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		cin>>matrix[i][j];
	}
	
	cout<<"Enter The Target - ";
	cin>>target;
	cout<<endl;
	
	int r=0 , c=m-1 ; 
	bool found = false;
	while(r<n && c>=0){
		if(matrix[r][c]==target){
			found=true;
		}
		if(matrix[r][c] > target){
			c--;
		}
		else{
			r++;
		}
	}
	if(found)
	cout<<"Element Found";
	else{
		cout<<"Element Not Found";
	}
	return 0;  
}
