#include<iostream>
#include<string.h>

using namespace std;

int main(){

	char a[100];

	cout<<"Enter Value : ";
	cin>>a;

	int i;

	for(i=0;a[i]!='\0';i++){

		if(a[i]>='0' && a[i]<='9'){

			cout<<"The Value is Numeric"<<endl;
		}
		else{
			cout<<"The Value is not Numeric"<<endl;
		}
	}


}