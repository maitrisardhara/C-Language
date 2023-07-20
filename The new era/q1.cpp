#include<iostream>
#include<string.h>
using namespace std;

class Distance{
	public :
		int feet;
		int inch;
};

int main(){
     
	Distance d,d1,sum;
	 
	cout<<"Enter Feet1 = ";
	cin>>d.feet;	
	cout<<"Enter Inch1 = ";
	cin>>d.inch;	
	
	cout<<"Enter Feet2 = ";
	cin>>d1.feet;	
	cout<<"Enter Inch2 = ";
	cin>>d1.inch;
	 
	sum.feet = d.feet + d1.feet;
	sum.inch = d.inch + d1.inch;	
	
	while(sum.inch>12){
		
		sum.feet++;
		sum.inch-=12;
		
	}
	 
	cout<<"Feet = "<<sum.feet<<" Inch = "<<sum.inch<<endl;
}