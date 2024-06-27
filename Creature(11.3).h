//CH - 230 - A
//a11.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#ifndef CREATURE_H
#define CREATURE_H

using namespace std;
#include<iostream>

class Creature {
public:
	Creature();
	void run() const;
	//destructor
	~Creature();
protected:
	int distance;
};

class Wizard : public Creature {
public:
	Wizard();
	void hover() const;
	~Wizard();
private:
	int distFactor;
};
class Minion : public Creature {
public:
	//methods & default constructor
	Minion();
	void color() const;
	void setDensity(string);
	~Minion();
private:
	string yellowness;
};
class Dua_lipa : public Creature {
public:
	Dua_lipa();
	//using setter method to get height
	void height() const;
	void setHeight(int);
	void streams() const;
	void setStreams(int);
	~Dua_lipa();
	friend void print(const Dua_lipa a);
private:
	int Height;
	int Streams;
};
#endif
