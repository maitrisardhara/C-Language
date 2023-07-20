#include<iostream>
#include<string.h>

using namespace std;

class Time{

	public : 
	int hour,min,sec;
};

int main(){

	Time t,t1,sum;

	cout<<"Enter Hour1 : ";
	cin>>t.hour;

	cout<<"Enter Min1 : ";
	cin>>t.min;
	
	cout<<"Enter Sec1 : ";
	cin>>t.sec;

	cout<<"Enter Hour2 : ";
	cin>>t1.hour;

	cout<<"Enter Min2 : ";
	cin>>t1.min;
	
	cout<<"Enter Sec2 : ";
	cin>>t1.sec;

	sum.hour = t.hour + t1.hour;
	sum.min = t.min + t1.min;
	sum.sec = t.sec + t1.sec;

	while(sum.min>60){

		sum.hour++;
		sum.min-=60;
	}
	
	while(sum.sec>60){

		sum.min++;
		sum.sec-=60;
	}

	cout<<"Sum of two time is = "<<sum.hour<<":"<<sum.min<<":"<<sum.sec<<endl;

	return 0;
}