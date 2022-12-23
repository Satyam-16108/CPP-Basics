#include<iostream>
using namespace std;

class student{
	public:
	string name;
	int age;
	bool gender;
	
	student(){										//Default Constructor
		cout<<"Default Constructor Called"<<endl;
	}
	
	student(string s, int a, int g){		    //Parameterized Constructor
		cout<<"Parameterised Constructor Called"<<endl;
		name=s;
		age=a;
		gender=g;
	}
	
	student(student &a){					//Copy Constructor
		cout<<"Copy Constructor Called"<<endl;
		name=a.name;
		age=a.age;
		gender=a.gender; 
	}
	
	~student(){
		cout<<"Destructor Called"<<endl;
	}
	
	void printInfo(){
		cout<<"Name = "<<name<<endl;
		cout<<"Age = "<<age<<endl;
		cout<<"Gender = "<<gender<<endl;
	}
	
	bool operator ==(student &a){
		if(name==a.name && age==a.age && gender==a.gender){
			return true;
		}
		return false;
	}
};

int main()
{
	student a("Satyam",20,0);
	a.printInfo();
	student b;
	student c=a;
	
	if(c==a){
		cout<<"(Same)"<<endl;
	}
	else{
		cout<<"(Not Same)"<<endl;
	}
	return 0;
}
