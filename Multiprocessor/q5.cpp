#include<iostream>
#include<string.h>
using namespace std;

class Points{
	public :
		int a,b;
		void set(int a, int b){
			this->a=a;
			this->b=b;
		}
		void print(){
			cout<<"A = "<<a<<" B = "<<b<<endl;
		}
		Points operator+(Points n){
			Points temp;
			cout<<"Sum of A and B is : ";
			temp.a= this->a + n.a;
			temp.b= this->b + n.b;
			return temp;
		}
};
int main(){
	Points p,p1,p2;
	p.set(10,20);
	p.print();
	p1.set(30,40);
	p1.print();
	p2=p+p1;
	p2.print();
}