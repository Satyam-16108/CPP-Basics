#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>

using namespace std;


struct stud_record{
	char name[50];
	float m1,m2,m3,m4,m5,m,pert;
	int roll,phone;string status;

};

int main (){
stud_record stud;
ifstream ifile;
ofstream ofile;char c;
ifile.open("student_marks_list.dat",ios::binary|ios::in);
ofile.open("student_marks_list.dat",ios::binary|ios::out);
do{
	cout<<"\nEnter the name of student";
	cin>>stud.name;
	cout<<"\nEnter the Roll No.";
	cin>>stud.roll;
		cout<<"\nEnter the Phone no.";
	cin>>stud.phone;
		cout<<"\nEnter the c++ marks ";
	cin>>stud.m1;
		cout<<"\nEnter the csa marks";
	cin>>stud.m2;
		cout<<"\nEnter the GE maths marks";
	cin>>stud.m3;
		cout<<"\nEnter the AECC marks";
	cin>>stud.m4;
		cout<<"\nEnter the python marks";
	cin>>stud.m5;
	stud.m=stud.m1+stud.m2+stud.m3+stud.m4+stud.m5;	
	stud.pert=stud.m/5;
	if(stud.pert>=50){
		stud.status="PASS";
	}
	else{
		stud.status="FAIL";
	}
	
 	ofile.write((char*)&stud,sizeof(stud));
 	
 	cout<<"\nDo u want to add record of more student (y/n)";
		
	cin>>c;
	
}
while(c=='y');
ofile.close();
cout<<"NAME"<<"\t"<<" C++ MARKS"<<"\t"<<" CSA MARKSS"<<"\t"<<"  GE MARKS"<<"\t"<<"  AECC MARKS"<<"\t"<<"  PYTHON MARKS"<<"\t"<<"TOTAL MARKS"<<"\t"<<"%AGE"<<"\t"<<"STATUS"<<endl;
if(!ifile){
	cout<<"\nFLE DOES NOT EXIST";
}
else{
while(!ifile.eof()){

ifile.read((char*)&stud,sizeof(stud));
cout<<stud.name<<"\t"<<"\t"<<stud.m1<<"\t"<<"\t"<<stud.m2<<"\t"<<"\t"<<stud.m3<<"\t"<<"\t"<<stud.m4<<"\t"<<"\t"<<stud.m5<<"\t"<<"\t"<<stud.m<<"\t"<<stud.pert<<"\t"<<stud.status<<endl;

		
}}
ifile.close();
return 0;}
