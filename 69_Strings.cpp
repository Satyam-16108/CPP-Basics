#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
	 
	string str(5,'A');		//Entering 5 times A
	cout<<str<<endl;
	
	string str1="Keshav Mahavidyalaya";
	cout<<str1<<endl;
	str1.clear();			//To clear string
	
	if(str1.empty())
	cout<<"String Is Empty"<<endl;

	//For Entering Sentences	
	string str2;		
	cout<<"Enter Any Sentence - ";
	getline(cin, str2);
	cout<<str2<<endl;
	
	string s1="fam";
	string s2="ily";
	string s3="kaboom";
	string s4="kaboom";	
	string s5="108";
	int x = 108;
	

	//Append
	cout<<s1+s2<<endl;
	s1.append(s2);    		//Appennd Copies s2 in s1
	cout<<s1<<endl;
	cout<<"Charcter 0 Of s1 - "<<s1[0]<<endl;
	
	//Compare
    if(!s3.compare(s4))
    cout<<"Strings Are Equal"<<endl;
	
	//Erase
	s3.erase(0,2);
	cout<<s3<<endl;
	
	//Find
	cout<<s4.find("boom")<<endl;
	cout<<s4.rfind("e")<<endl;
	
	//Insert
	s3.insert(0, "ka");
	cout<<s3<<endl;
	
	//Length
	cout<<s3.length() <<endl;
	
	for(int i=0; i<s3.length();i++)
	cout<<s3[i]<<endl;
	
	//Substring
	string s6 = s4.substr(2, 4);
	cout<<s6<<endl;
	
	//Sort
    sort(s3.begin(), s3.end());
	cout<<s3<<endl;
	
	//Adddition With String
	x = stoi(s5);
	cout<< x+2<<endl;
	
	//Append Integer With STring
	cout<< to_string(x) + "2"<<endl;
	
	return 0;
}
