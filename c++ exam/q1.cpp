#include<iostream>
#include<iostream>
#include<string.h>
using namespace std;

class Distance{
	public :
		int feet;
		int inch;
};

int main(){
	
	Distance d,d1,d2;
	
	cout<<"Enter Feet1 : ";
	cin>>d.feet;
	cout<<"Enter Inch1 : ";
	cin>>d.inch;
	
	cout<<"Enter feet2 : ";
	cin>>d1.feet;
	cout<<"Enter Inch2 : ";
	cin>>d1.inch;
	
	d2.feet = d.feet + d1.feet;
	d2.inch = d.inch + d1.inch;
	
	while(d2.inch>12){
		
		d2.feet++;
		d2.inch-=12;
	}
	cout<<"Answer is : "<<endl;
	cout<<d2.feet<<" Feet "<<d2.inch<<" Inch "<<endl;
	
return 0;
	    
}
