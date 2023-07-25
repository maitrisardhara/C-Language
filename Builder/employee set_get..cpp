#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	private :
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char address[100];
	char email[100];
	char contact[10];
	
	public : 
	
	void setData()
	{
		cout<<"Enter Employee id = ";
		cin>>id;
		cout<<"Enter Employee name = ";
		cin>>name;
		cout<<"Enter Employee role = ";
		cin>>role;
		cout<<"Enter Employee salary = ";
		cin>>salary;
		cout<<"Enter Employee experience = ";
		cin>>experience;
		cout<<"Enter Employee address = ";
		cin>>address;
		cout<<"Enter Employee email = ";
		cin>>email;
		cout<<"Enter Employee contact = ";
		cin>>contact;
	}
	
	void getData()
	{
		cout<<"Employee id = "<<id<<endl  
		    <<"Employee name = "<<name<<endl
		    <<"Employee role = "<<role<<endl
		    <<"Employee salary = "<<salary<<endl
		    <<"Employee experience = "<<experience<<endl
		    <<"Employee address = "<<address<<endl
		    <<"Employee email = "<<email<<endl
		    <<"Employee contact = "<<contact<<endl;
	}
	
};

int main(){
	
	Employee e,e1,e2,e3,e4;
	e.setData();
    e1.setData();
    e2.setData();
	e3.setData();
	e4.setData();
	cout<<"\n";
	cout<<"=================================================================="<<endl;
	cout<<"\n";
	e.getData();
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	
	return 0;
}