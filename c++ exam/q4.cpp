#include<iostream>
#include<string.h>

using namespace std;

class Value{
	
	public :
		
		int a;
		float b;
		char c[100];
		
		void set(){
			cout<<"Value are : "<<endl;
		}
		
		void set(int a){
			this->a = a;
			cout<<" A : "<<a<<endl;		
			}
			
		void set(int a,float b){
			this->a = a;
			this->b = b;
			
			cout<<" A : "<<a<<endl;
			cout<<" B : "<<b<<endl;
		}
		
		void set(int a,float b,char c[]){
			this->a = a;
			this->b = b;
			strcpy(this->c,c);
			
			cout<<" A : "<<a<<endl;
			cout<<" B : "<<b<<endl;
			cout<<" C : "<<c<<endl;
		}	
};

int main(){
	
	Value v;
	
	v.set();
	v.set(10);
	v.set(20,14.02);
	v.set(30,12.06,"Maitri");
	
	
}
