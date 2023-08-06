#include <iostream>
#include<string.h>
using namespace std;

class Cat{
public:
    void Sounds(){
        cout<<"Cat -> meows"<<endl;
    }
};

class Dog : public Cat{
public:
    void Sounds(){
        cout<<"Dog -> barks"<<endl;
    }
};

int main() {
	
	Dog d;
	d.Sounds();
	d.Cat::Sounds();
    
    return 0;
}
