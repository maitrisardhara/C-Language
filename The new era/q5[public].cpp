#include<iostream>
#include<string.h>
using namespace std;

class Student{
	public :
	int id;
	char name[100];
	int std;
	char school_name[100];  	
};

int main(){
	
	Student s;
	s.id = 4237;
	strcpy(s.name,"Maitri");
	s.std = 12;
	strcpy(s.school_name,"ASHADEEP INTERNATIONAL SCHOOL");
	
	cout<<"Student id = "<<s.id<<endl<<"Student name = "<<s.name<<endl<<"Student std = "<<s.std<<endl<<"Student school = "<<s.school_name<<endl;
	return 0;
}