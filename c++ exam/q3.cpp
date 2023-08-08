#include<iostream>
#include<string.h>

using namespace std;

class Hotel{
	private :
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		int rating_type;
		char website[100];
	   
		
		public :
			
		void set_info(int id,char name[100],char type[100],int staff_size,int room_size,int establish_year,char address[100],int rating_type,char website[100])
	{
		
	    this->id = id;
	    strcpy(this->name,name);
	    strcpy(this->type,type);
        this->staff_size = staff_size;
        this->room_size = room_size;
        this->establish_year=establish_year;
        strcpy(this->address,address);
        this->rating_type = rating_type;
		strcpy(this->website,website);
	
	}

		void get_info()
		{
		
		cout<<" Id = "<< id<<endl
			<<" Name =  "<<name<<endl
			<<" Type = "<<type<<endl
		    <<" Staff Size =  "<<staff_size<<endl
		    <<" Room Size =  "<<room_size<<endl
		    <<" Establish Year  = "<<establish_year<<endl
		    <<" Address = "<<address<<endl
		    <<" Rating Type = "<< rating_type<<endl
		    <<" Website = "<< website<<endl;
		    
		}
};




int main(){
	
	Hotel h;
	
	h.set_info(1,"Taj Hotel","Vegiterian",23000,700,1999,"Mumbai",9,"tajhotel.com");
	h.get_info();
	
		
		return 0;
}
