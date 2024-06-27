//CH - 230 - A
//a10.p4.c++
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include "Critter.h"
using namespace std;

int main() {

    
    Critter critter1; 
    Critter critter2("Critter2"); 
    Critter critter3("Critter3", 1, 5); 
    Critter critter4("Critter4", 11, 22, 33); 

    //assigns hungerlevel to 2
    critter1.sethunger(2);
    critter2.sethunger(2);
    critter3.sethunger(2);
    critter4.sethunger(2);

    //prints all the data of critters
    cout << "Critter 1:" << endl;
    critter1.printi();
    cout << endl;

    cout << "Critter 2:" << endl;
    critter2.printi();
    cout << endl;

    cout << "Critter 3:" << endl;
    critter3.printi();
    cout << endl;

    cout << "Critter 4:" << endl;
    critter4.printi();

    return 0;
}
