#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	public :
	int id;
	char name[100];
	char company_name[100];
	char position[100];
	  	
};

int main(){
	
	Employee e;
	e.id = 2;
	strcpy(e.name,"Maitri");
	strcpy(e.company_name,"Zara");
	strcpy(e.position,"Manager");
	
	cout<<"Employee id = "<<e.id<<endl<<"Employee name = "<<e.name<<endl<<"Company name = "<<e.company_name<<endl<<"Position = "<<e.position<<endl;
	return 0;
}