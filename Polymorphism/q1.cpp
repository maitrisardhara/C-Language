#include<iostream>
#include<string.h>
using namespace std;

class Methods{
	public : 
	  int a;
	  float b;
	  char c[100];
	  void set(){
	  	cout<<"Method Set"<<endl<<endl;
	  }
	  void set(int a){
	  	this-> a = a;
	  	cout<<"Value of A : "<<a<<endl;
	  }
	  void set(int a, float b){
	  	this->a = a;
	  	this->b = b;
	  	cout<<"Value of A : "<<a<<endl;
	  	cout<<"Value of B : "<<b<<endl;
	  }
	  void set(int a, float b, char c[]){
	  	this->a = a;
	  	this->b = b;
	  	strcpy(this->c,c);
	  	cout<<"Value of A : "<<a<<endl;
	  	cout<<"Value of B : "<<b<<endl;
	  	cout<<"Value of C : "<<c<<endl;
	  }
};
int main(){
	
	Methods m;
	m.set();
	m.set(20);
	m.set(10,14.06);
	m.set(15,14.12,"Maitri");
	return 0;
}