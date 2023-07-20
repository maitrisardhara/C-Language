#include<iostream>
#include<string.h>
using namespace std;

class HouseDetail{
	public :
	int area;
	char address[100];
	char name[100];
	int house_plan;  	
};

int main(){
	
	HouseDetail hd;
	hd.area = 1600;
	strcpy(hd.address,"ANANTA-502,SHIVANTA PALACE,SARTHANA JAKATNAKA");
	strcpy(hd.name,"PRASAD");
    hd.house_plan = 4;
    
    cout<<"House area = "<<hd.area<<" sq ft"<<endl<<"House Address = "<<hd.address<<endl<<"House name = "<<hd.name<<endl<<"House plan = "<<hd.house_plan<<"bhk"<<endl;
    
    return 0;
}

	
