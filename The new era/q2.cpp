#include<iostream>
#include<string.h>

using namespace std;

class Time{

	public : 
	int hour,min,sec;
};

int main(){

	Time t,t1,sum;

	cout<<"Enter 1st Seconds : ";
	cin>>t.sec;

	while(t.sec>=60){

		t.min++;
		t.sec-=60;

	}
	while(t.min>=60){

			t.hour++;
			t.min-=60;
		}

	cout<<"1st Time is : "<<t.hour<<":"<<t.min<<":"<<t.sec<<endl;
	
	cout<<"Enter 2nd Seconds : ";
	cin>>t1.sec;

	while(t1.sec>=60){

		t1.min++;
		t1.sec-=60;

	}
 while(t1.min>=60){

			t1.hour++;
			t1.min-=60;
		}
		
	cout<<"2nd Time is : "<<t1.hour<<":"<<t1.min<<":"<<t1.sec<<endl;
	sum.hour = t.hour + t1.hour;
	sum.min = t.min + t1.min;
	sum.sec = t.sec + t1.sec;
	
	cout<<"Sum of two times : "<<sum.hour<<":"<<sum.min<<":"<<sum.sec;

	return 0;
}