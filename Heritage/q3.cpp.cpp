#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	public :
	int id;
	char name[100];

    public :
	void setData()
	{
		cout<<"Enter Employee id = ";
		cin>>id;
		cout<<"Enter Employee name = ";
		cin>>name;
	}
	
	void getData()
	{
		cout<<"Employee id = "<<id<<endl  
		    <<"Employee name = "<<name<<endl;
    }
};
class Employee1{
	public :
	
	char role[100];
	int salary;
	
	public :
	void sTData()
	{
		cout<<"Enter Employee role = ";
		cin>>role;
		cout<<"Enter Employee salary = ";
		cin>>salary;
	}
	
	void gTData()
	{
		cout<<"Employee role = "<<role<<endl
		    <<"Employee salary = "<<salary<<endl;
	}
	
};
class Employee2 : public Employee , public Employee1{
	public :
	
	char contact[10];
	
	public :
	void stData()
	{
		cout<<"Enter Employee contact = ";
		cin>>contact;
		cout<<"====================================================="<<endl;
	}
	
	void gtData()
	{
		cout<<"Employee contact = "<<contact<<endl;
	
	}
};
	int main(){

	Employee2 e;
	
	e.setData();
	e.sTData();
	e.stData();
	e.getData();
	e.gTData();
	e.gtData();
	
	return 0;
}
 