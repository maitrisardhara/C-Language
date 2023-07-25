#include<iostream>
#include<string.h>
using namespace std;

class IndianState {
public:
	
    static char stateName[100];
    static char capital[100];
    char vehical_code[100] = "GA";
    int population = 1458545;
    char beachName[100] = "Sinquerim Beach";
    char cityName[100] = "Vasco da Gama";
    char food[100] = "Karanji";
    

    static void displayStateDetails() {
        cout << "State" << stateName <<endl
             << "Capital" << capital <<endl;
    }
};

char IndianState::stateName[100] = "Goa";
char IndianState::capital[100] = "Panaji";


int main() {
	
	IndianState i;
    
    cout<<i.stateName<<","
        <<i.capital<<endl
        <<"1.Vehical Code = "<<i.vehical_code<<endl
        <<"2.Population = "<<i.population<<endl
        <<"3.Beach Name = "<<i.beachName<<endl
        <<"4.City Name = "<<i.cityName<<endl
        <<"5.Food = "<<i.food<<endl;
        

    return 0;
}