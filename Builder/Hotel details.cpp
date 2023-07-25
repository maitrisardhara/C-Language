#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
   private :
	int id;
	char name[100];
	char type[100];
	int staff_size;
	int room_size;
	int established_year;
	char address[100];
	int rating_type;
	char website[100];
	
	public :
		
		void setData(int id,char name[100],char type[100],int staff_size,int room_size,int established_year,char address[100],int rating_type,char website[100])
		{
			this->id = id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->established_year = established_year;
			strcpy(this->address,address);
			this->rating_type = rating_type;
			strcpy(this->website,website);
		}
		
		void getData()
		{
			cout<<"Hotel Id = "<<id<<endl
			    <<"Hotel name = "<<name<<endl
			    <<"Hotel type = "<<type<<endl
			    <<"Hotel staff_size = "<<staff_size<<endl
			    <<"Hotel room_size = "<<room_size<<endl
			    <<"Hotel established_year = "<<established_year<<endl
			    <<"Hotel address = "<<address<<endl
			    <<"Hotel rating_type = "<<rating_type<<endl
			    <<"Hotel website = "<<website<<endl;
		}
};

int main(){ 
	Hotel h;
	h.setData(10,"Taj Hotel","Vegetarian",1097,560,2001,"Express Towers Nariman Point Mumbai Maharashtra India",9,"tajhotel.com");
	h.getData();
		
	return 0;
}
	