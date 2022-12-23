#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter Your Name And Age - ";
	cin.getline(arr,100);
	
	ofstream myfile("FH.txt",ios::app);				// Append Function Used To Add New Info. To Existing Data
 // fstream myfile("FH.txt",ios::out|ios::app);	   // While Using fstream You Have To Define Whether You will Perform Input OR Output Function
	myfile<<arr;
	myfile.close();
	cout<<"FILE WRITE OPERATION PERFORMED SUCCESSFULLY\n"<<endl;
	
	cout<<"READING FROM FILE OPERATION STARTED"<<endl;
	char arr1[100];
	ifstream obj("FH.txt");
	obj.getline(arr1,100);
	cout<<"ARRAY CONTENT: "<<arr1<<endl;
	cout<<"FILE READ OPERATION PERFORMED SUCCESSFULLY"<<endl;
	obj.close();
	
	return 0;
}
