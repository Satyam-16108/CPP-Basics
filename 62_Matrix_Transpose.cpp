#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	
	cout<<"Input A Square Matrix For Transpose :  "<<endl;
	int matrix[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		cin>>matrix[i][j];
	}
	
	
	//SWAP
	for(int i=0;i<n;i++){
		for(int j=i;j<m;j++){            //j=i SO THAT ONLY DIAGONAL ELEMENTS SWAP
			int temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}
	}
	
	
	//PRINT
	cout<<"Transpose Of Matrix Is : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
