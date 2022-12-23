#include<iostream>
#include<iomanip>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
	string s1;char ch;char s2[10];char word[50];
	int n=0;int x=0;int y=0;int z=0;int B=0;int A=0;
		ifstream Read;
	Read.open("abc.txt");
		ifstream Read1;
	Read1.open("abc.txt");
		ifstream Read2;
	Read2.open("abc.txt");
	
	if(!Read)
	cout<<"FILE DOES NOT EXIT"<<endl;
	else{
		while(!Read.eof()){
		
			Read.get(ch);cout<<ch;
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
				n++;
			}
			if(int(ch)>=65&&int(ch)<=91){
				x++;
			}
			if(ch=='a'){
			y++;}
			if(int(ch)==46){
				A++;
			}
			
			
		}
		
		
		cout<<"\nNO. of vowels = "<<n;
		cout<<"\nNo. of Upper Alphabet = "<<x;
			cout<<"\nNo. of Alphabet a is repeated = "<<y;
				cout<<"\nNO. of LINES = "<<A;
				
		
	}cout<<endl;
		while(!Read1.eof()){
		Read1>>word;
			cout<<word;
			z++;
	
	}
			cout<<"\nNo. of words = "<<z<<endl;
	
		Read1.close();
		cout<<endl;
	
	while(!Read2.eof()){
Read2.getline(s2,10);	

	B++;
cout<<s2;	
}

cout<<"\nlines="<<B;
	Read2.close();		
			
	return 0;	
}
