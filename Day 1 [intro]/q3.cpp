#include<iostream>
#include<string.h>
using namespace std;

int main(){

	char a[100],i;

	cout<<"Enter Value : ";
	cin>>a;

	for(i=0;i<=strlen(a);i++){

		if(a[i]>='a' && a[i]<='z'){

			a[i]-=32;
		}
		else{
			a[i]+=32;
		}

	}
	cout<<a;

    return 0;
}