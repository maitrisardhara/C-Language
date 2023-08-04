#include<iostream>
#include<string.h>
using namespace std;

class M
{
	public : 
	  int a = 10;
	  void Display(){
	  	cout<<"Method From Class M"<<endl;
	  }
};

class D
{
	public : 
	  int b = 100;
	  void Display(){
	  	cout<<"Method From Class D"<<endl;
	  } 
};

int main(){
	
	D x1;
	cout<<x1.b<<endl;
	x1.Display();
	
	return 0;
}