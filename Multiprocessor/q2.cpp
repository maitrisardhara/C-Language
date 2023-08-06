#include<iostream>
#include<string.h>
using namespace std;

class Values{
	public :
		int a,b;
		float c,d;
		
		void set(){
			cout<<"Values are : "<<endl;
		}
		void display(float c){
			this->c=c;
			cout<<"C = "<<c<<endl;
		}
		void show(int a,float d){
			this->a=a;
			this->d=d;
			cout<<"A = "<<a<<endl
			    <<"D = "<<d<<endl;
		}
		void print(int a,int b,float c){
			this->a=a;
			this->b=b;
			this->c=c;
			cout<<"A = "<<a<<endl
		     	<<"B = "<<b<<endl
			    <<"C = "<<c<<endl;
		}
};
int main(){
	
	Values v;
	v.set();
	v.display(14.06);
	v.show(10,12.06);
	v.print(20,30,14.02);
}