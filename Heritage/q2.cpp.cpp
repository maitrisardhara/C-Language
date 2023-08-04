#include <iostream>
#include <string>
using namespace std;

class Animal {
public :
    char name[100];
    int age;

public :
    void display() {
        cout<<"Enter Name =";
        cin>>name;
        cout<<"Enter Age = ";
        cin>>age;
	}
};

class Zebra : public Animal {
	
    
public:
    
    
    void get_info()
	{
		cout<<"Zebra Name = "<<name<<endl  
		    <<"Zebra Age = "<<age<<endl;
	}
};

class Dolphin : public Animal {

public :
    char place_of_origin[100];
    
public:
    void set_value() {
       cout << "Enter place of origin = ";
	    cin>>place_of_origin;
    }
    
    void get_value()
	{
		cout<<"Dolphin Name = "<<name<<endl  
		    <<"Dolphin Age = "<<age<<endl;
		cout<< "Place of origin = "<<place_of_origin<<endl;
    }
};

int main() {
	

	
    Zebra z;
    z.display();
    z.get_info();
    
    Dolphin d;
    d.display();
    d.set_value();
    d.get_value();

    return 0;
}