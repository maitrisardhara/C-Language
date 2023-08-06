#include <iostream>
#include <string.h>
using namespace std;

class Message {
private:
    string int_msg;

public:
    
    Message(const string& msg = "Internal Message : ") : int_msg(msg) {}

    void print() {
        cout<<int_msg<<endl;
    }

    void print(const string& addMsg) {
        cout<<int_msg<<" "<<addMsg<<endl;
    }
};

int main() {
    Message msg1;  
    Message msg2("Additional Message : ");                
    msg1.print("Default Message");                 
    msg2.print("Hello, World!");       

    return 0;
}