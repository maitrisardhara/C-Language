#include <iostream>
#include<string.h>
using namespace std;

class Points{
public :	
    int x;
    int y;
    void set(int x){
    	cout<<"Before Increment : ";
    	this->x = x;
    }
    void set_data(int y){
    	cout<<"Before Decrement : ";
    	this->y = y;
    }
    void print(){
        cout<<"X = "<<x<<endl;
        cout<<"========================="<<endl;
    }
    void print_data(){
        cout<<"Y = "<<y<<endl;
        cout<<"========================="<<endl;
    }
    
    Points operator++(int x){
    	Points temp;
    	temp.x = this->x++;
    	cout<<"After Increment : ";
    	return temp;
    
	}
	 Points operator--(int y){
    	Points temp;
    	temp.y = this->y--;
    	cout<<"After Decrement : ";
    	return temp;
    
	}
};

int main() {
	
	Points p; 
	p.set(14);
	p.print();
	p++;
	p.print();
	p.set_data(14);
	p.print_data();
	p--;
	p.print_data();

    return 0;
}
