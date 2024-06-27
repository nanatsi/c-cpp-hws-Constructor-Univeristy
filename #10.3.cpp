//CH - 230 - A
//a10.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include <iostream>
#include "City.h"
using namespace std;

int main() {
    //creats instances of the City class
    City bremen;
    City paris;
    City london;

    //sets data for cities
    bremen.setName("Bremen");
    bremen.setInhabitants(568000);
    bremen.setMayor("Andreas Bovenschulte");
    bremen.setArea(326.7);

    paris.setName("Paris");
    paris.setInhabitants(2102650);
    paris.setMayor("Anne Hidalgo");
    paris.setArea(105.4);

    london.setName("London");
    london.setInhabitants(8800000);
    london.setMayor("Sadiq Khan");
    london.setArea(1572);

    //prints everything 
    cout << "City: " << bremen.getName() << std::endl;
    cout << "Inhabitants: " << bremen.getInhabitants() << std::endl;
    cout << "Mayor: " << bremen.getMayor() << std::endl;
    cout << "Area: " << bremen.getArea() << " km^2" << std::endl;

    cout << "\nCity: " << paris.getName() << std::endl;
    cout << "Inhabitants: " << paris.getInhabitants() << std::endl;
    cout << "Mayor: " << paris.getMayor() << std::endl;
    cout << "Area: " << paris.getArea() << " km^2" << std::endl;

    cout << "\nCity: " << london.getName() << std::endl;
    cout << "Inhabitants: " << london.getInhabitants() << std::endl;
    cout << "Mayor: " << london.getMayor() << std::endl;
    cout << "Area: " << london.getArea() << " km^2" << std::endl;

    return 0;
}
