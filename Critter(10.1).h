//CH - 230 - A
//a10.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	double weight;
	int age;
	

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setWeight(double newweight);
	void setAge (int newage);
	// getter method
	int getHunger();
	double getWeight();
	int getAge();
	// service method
	void print();
};
