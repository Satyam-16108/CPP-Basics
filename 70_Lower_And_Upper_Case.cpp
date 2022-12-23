#include<bits/stdc++.h>
using namespace std;

int main(){
	 
	string str ="keshav mahavidyalaya";
	cout<<"ORIGINAL STRING -> "<<str<<endl;
	
	
	//Convert To Upper Case
	cout<<"DIFFERENCE B/W 'm' & 'M' -> "<<'m'-'M'<<endl;
	
	for(int i=0;i<str.size();i++){
		if(str[i] >= 'a' && str[i]<='z')
		   str[i] -= 32;
	}
	cout<<"UPPER CASE -> "<<str<<endl;
	
	
	//Connvert To Lower Case
	for(int i=0;i<str.size();i++){
		if(str[i] >= 'A' && str[i]<='Z')
		   str[i] += 32;
	}
	cout<<"LOWER CASE -> "<<str<<endl;	
	
	
	//Convert To Upper Case
	transform(str.begin(), str.end(), str.begin(), ::toupper );
	cout<<"UPPERCASE USING FUNCTION IN STRINGS - "<<str<<endl;
	
	
	//Convert To Lower Case
	transform(str.begin(), str.end(), str.begin(), ::tolower );
	cout<<"LOWERCASE USING FUNCTION IN STRINGS - "<<str<<endl;
		
	return 0;
}
