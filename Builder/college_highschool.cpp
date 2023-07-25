#include<iostream>
#include<string.h>
using namespace std;

class College
{
	public :
	int id = 6;
	char stu_name[100] = "MAITRI";
	int stu_roll_no = 14;
	int stu_standard = 12;
	int stu_age = 19;
	char stu_contact[11] = "9924848881";
    static char stu_edu_institute_name[100];
	char stu_address[100] = " Shivanta Palace";
	
	
	static void print(){
		
		cout<<stu_edu_institute_name<<endl;
		
	}
};

class HighSchool
{
	public :
		
	int id = 14;
	char stu_name[100] = "Maitri";
	int stu_roll_no = 6;
	int stu_standard = 12;
	int stu_age = 18;
	char stu_contact[11] = "9924848881";
	static char stu_edu_institute_name[100];
	char stu_address[100] = "Shivanta Palace";
	
	
	static void print(){
		
		cout<<stu_edu_institute_name[100]<<endl;
		
	}
};

char HighSchool ::stu_edu_institute_name[100] = "ASHADEEP INTERNATIONAL SCHOOL";
char College ::stu_edu_institute_name[100] = "SCET";

int main(){
	
	College c;
	
	cout<<""<<c.stu_edu_institute_name<<endl<<endl;
	cout<<"1.Id = "<<c.id<<endl
	    <<"2.Stu_name = "<<c.stu_name<<endl
	    <<"3.Stu_roll_no = "<<c.stu_roll_no<<endl
	    <<"4.Stu_standard = "<<c.stu_standard<<endl
	    <<"5.Stu_age = "<<c.stu_age<<endl
	    <<"6.Stu_contact = "<<c.stu_contact<<endl
	    <<"7.Stu_address = "<<c.stu_address<<endl<<endl;
	cout<<"=================================================================="<<endl<<endl;
   
   
   
     HighSchool h;
	
	cout<<""<<h.stu_edu_institute_name<<endl<<endl;
	cout<<"1.Id = "<<h.id<<endl
	    <<"2.Stu_name = "<<h.stu_name<<endl
	    <<"3.Stu_roll_no = "<<h.stu_roll_no<<endl
	    <<"4.Stu_standard = "<<h.stu_standard<<endl
	    <<"5.Stu_age = "<<h.stu_age<<endl
	    <<"6.Stu_contact = "<<h.stu_contact<<endl
	    <<"7.Stu_address = "<<h.stu_address<<endl;
	    
	    return 0;
}
   