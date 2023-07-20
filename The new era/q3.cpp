#include <iostream>
#include<string.h>
using namespace std;

int main(){
	
	int hours;
    int minutes;
    int seconds;
 
	cout<<"Enter seconds :"<<endl;
	cin>>seconds;
	
	hours = (seconds/3600);
	minutes = (seconds -(3600*hours))/60;
	seconds = (seconds -(3600*hours)-(minutes*60));
	
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
   
   return 0;
}

