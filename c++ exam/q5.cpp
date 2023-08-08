#include<iostream>
#include<string.h>

using namespace std;

class Emp{
	public:
    	int id;
		char name[100];
		char role[100];
		int salary;
		int room_size;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		char contact[10];
	public :   
	   void set(){
	   	cout<<"Enter Id : ";
	    cin>>id;
	    cout<<"Enter Name : ";
	    cin>>name;
	    cout<<"Enter Role : ";
	    cin>>role;
	   } 
};

class Emp1 : public Emp{
	
	public :   
	   void show(){
	   	cout<<"Enter Salary : ";
	    cin>>salary;
	    cout<<"Enter Experience : ";
	    cin>>experience;
	   } 
};

class Emp2 : public Emp1{
	public :   
	   public :   
	   void set_data(){
	   	cout<<"Enter Company Name : ";
	    cin>>comp_name;
	    cout<<"Enter Address : ";
	    cin>>address;
	   } 
	   void get(){
	   	cout<<" Name = "<< name<<endl
	   	    <<" Role = "<< role<<endl
	   	    <<" Salary = "<< salary<<endl;
	   } 
};

class Emp3 : public Emp2{

	public :   
	   void display(){
	   	cout<<"Enter Email : ";
	    cin>>email;
	    cout<<"Enter Contact : ";
	    cin>>contact;
	    cout<<"==========================================================="<<endl;
	   } 
	void print(){
	   	cout<<" Id = "<< id<<endl
	   	    <<" Experience = "<< experience<<endl
	   	    <<" Company Name = "<< comp_name<<endl
	   	    <<" Address = "<< address<<endl
	   	    <<" Email = "<< email<<endl
	   	    <<" Contact = "<< contact<<endl;
	   } 
};

int main(){
	Emp3 e;
	e.set();
	e.show();
	e.set_data();
	e.display();
	e.get();
	e.print();
	
}
