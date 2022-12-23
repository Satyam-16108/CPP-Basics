#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

char Grade(int marks){
	char grade;
	if(marks>90)
	grade='a';
	else if(marks<=90&&marks>80)
	grade='b';
else if(marks<=80&&marks>70)
	grade='c';
	else if(marks<=70&&marks>60)
	grade='d';
	
	else
	{
	
	grade='e';}
	return(grade);
}
int main()
{
	string s1;float marks,m1,m2,m3,m4,m5,pert;
ifstream s;
ofstream write;

int Roll_no;char grade;
s.open("Report.txt"); write.open("DupReport.txt");
if(!s){
	cout<<"\nCheck ur file"<<endl;

}
else{

cout<<"FILE IS ACCESSED"<<endl;
	cout<<"Name"<<setw(8)<<"Roll No"<<setw(5)<<"m1"<<setw(5)<<"m2"<<setw(5)<<"m3"<<setw(5)<<"m4"<<setw(5)<<"m5"<<setw(5)<<"marks"<<setw(5)<<"%age"<<setw(5)<<"Grade"<<endl;
	
while(!s.eof())
{
	s>>s1>>Roll_no>>m1>>m2>>m3>>m4>>m5;
		marks=m1+m2+m3+m4+m5;pert=marks/5;
		grade=Grade(pert);
		
  write<<s1<<setw(5)<<Roll_no<<setw(5)<<m1<<setw(5)<<m2<<setw(5)<<m3<<setw(5)<<m4<<setw(5)<<m5<<setw(5)<<marks<<setw(5)<<pert<<setw(5)<<grade<<endl;
}
}
write.close();
return 0;
}
