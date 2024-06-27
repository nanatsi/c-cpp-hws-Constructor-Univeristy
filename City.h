//CH - 230 - A
//a10.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#ifndef CITY_H
#define CUTY_H

#include<string>

class city {
private:
    std::string name;
    int inhabitants;
    std::string mayor;
    double area;

public:
    void setName(std::string& new_name);
    void setInhabitants(int newpopulation);
    void setMayor(std::string Mayor);
    void area(double area);


    std::string getName() const;
    int getpopulation() const;
    std::string Mayor() const;
    double getArea();

};
#endif










/*#ifndef CITY_H
#define CITY_H

#include <string>

class City
{// data members are private
private:
    std::string name;
    int inhabitants;
    std::string mayor;
    double area;

public:
    
    City(); 

    //setter methods
    void setName(const std::string& new_name);
    void setInhabitants(int new_inhabitants);
    void setMayor(const std::string& new_mayor);
    void setArea(double new_area);

    //getter methods
    std::string getName() const;
    int getInhabitants() const;
    std::string getMayor() const;
    double getArea() const;
};

#endif*/



