#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	cin.ignore();
	char array[n+1];
	cin.getline(array,n);
	cin.ignore();

	int i=0 , currLeng=0, maxLeng=0 , st=0 , maxst=0;	
			 
	while(1){
		if(array[i]==' ' || array[i]=='\0'){
			if(currLeng>maxLeng){
				maxLeng=currLeng;
				maxst=st;
			}
			currLeng=0;
			st=i+1;
		}
		else
		currLeng++;
		if(array[i]=='\0')
		break;
		
		i++;	
	}
	
	cout << "LENGTH OF LONGEST WORD IS  "<<maxLeng<<endl;
	for(int i=0;i<=maxLeng;i++)
		cout<<array[i+maxst];
	return 0;
}
