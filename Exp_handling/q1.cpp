#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter Value A : ";
	cin>>a;
	cout<<"Enter Value B : ";
	cin>>b;
	char sol[100]="Cannot divide by zero";
	
	try{
		if(b==0){
			throw 1;
		}
		else{
			c=a/b;
			cout<<"C is : "<<c<<endl;
		}
	}
	catch(int){
		cout<<"Cannot divide by Zero"<<endl;
	}
	catch(char[]){
		cout<<sol<<endl;
	}
return 0;	
}