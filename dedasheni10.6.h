//CH - 230 - A
//a10.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <string>

class Critter {
private:
    std::string name;
    double hunger;
    int boredom;
    double height;
    double thirst;

    double convertToDouble(int newhunger);
    int convertToInt(double newhunger);

public:
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    void setThirst(double newthirst);

    // getter methods
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    double getThirst();

    // service method
    void printi();

    // constructors
    Critter();
    Critter(std::string newname);
    Critter(std::string newname, int newhunger, int newboredom, double newheight = 10);
    Critter(std::string newname, int newhunger, int newboredom, double newheight, double newthirst);
};
