#include <iostream>
#include <string>
using namespace std;

class Employee {
public :
    int empId;
    char name[100];
    char role[100];
    float salary;
    int experience;
    char comp_name[100];
    char address[100];
    char email[100];
    char contact[10];

public :
    void display() {
        cout<<"Enter employee ID: ";
        cin>>empId;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter role: ";
        cin>>role;
    }
};

class Employee1 : public Employee {


public:
    void setData() {
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<"Enter experience: ";
        cin>>experience;
    }
};

class Employee2 : public Employee1 {

public :
    
public:
    void set_value() {
       cout<<"Enter Company Name: ";
        cin>>comp_name;
        cout<<"Enter Address: ";
        cin>>address;
    }
    
    void get_value()
	{
		cout<< "Employee Name: "<<name<<endl;
        cout<< "Employee Role: "<<role<<endl;
        cout<< "Employee Salary: "<<salary<<endl;
    }
};

class Employee3 : public Employee2{

public : 	
	
    
public:
    void stData() {
        cout<<"Enter Email: ";
        cin>>email;
        cout<<"Enter Contact: ";
        cin>>contact;
        cout<<"================================================================"<<endl;
    }
    
    void printData() {
    	cout<< "Employee Id: "<<empId<<endl;
//        cout<< "Employee Name: "<<name<<endl;
//        cout<< "Employee Role: "<<role<<endl;
//        cout<< "Employee Salary: "<<salary<<endl;
 
        cout<< "Employee Experience: "<<experience<<endl;
        cout<< "Employee Company Name: "<<comp_name<<endl;
        cout<< "Employee Address: "<<address<<endl;
        cout<< "Employee Email: "<<email<<endl;
        cout<< "Employee Contact: "<<contact<<endl;
    }
	
};

int main() {
	
	Employee3 e;
	e.display();
	e.setData();
	e.set_value();
	e.stData();
	e.printData();
	e.get_value();
    return 0;
}