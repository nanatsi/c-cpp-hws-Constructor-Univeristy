//CH - 230 - A
//a11.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>

using namespace std;

class Creature {
public:
	Creature();
	void run() const;
	//destructor
	~Creature();
protected:
	int distance;
};

Creature::Creature() : distance(10){
	cout << "this is  a constructor\n";
}

void Creature::run() const
{
	cout << "running " << distance << " meters!\n";
}
Creature::~Creature() {
	cout << "this is a distructor\n";
}

class Wizard : public Creature {
public:
	Wizard();
	void hover() const;
	~Wizard();
private:
	int distFactor;
};

Wizard::Wizard() : distFactor(3) {
	cout << "this is  a constructor\n";
}

void Wizard::hover() const
{
	cout << "hovering " << (distFactor * distance) << " meters!\n";
}
Wizard::~Wizard() {
	cout << "this is a distructor\n";
}
//creating derived classes
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

Minion::Minion() :yellowness("#e0d68d") {
	cout << "this is  a constructor\n";
}
//shows result
void Minion::color() const {
	cout << "average minion color density is " << yellowness << ".\n";
}
//sets density
void Minion::setDensity(string str) {
	yellowness = str;
}
Minion::~Minion() {
	cout << "this is a distructor\n";
}
//inherited class from creature
class Dua_lipa : public Creature {
public:
	Dua_lipa();
	//using setter method to get height
	void height() const;
	void setHeight(int);
	void streams() const;
	void setStreams(int);
	~Dua_lipa();
private:
	int Height;
	int Streams;
};
Dua_lipa::Dua_lipa() : Height(11) {
	cout << "this is  a constructor\n";
}
//shows results
void Dua_lipa::height() const {
	cout << "Dua Lipa's levitating height is " << (Height * distance) << ".\n";
}
void Dua_lipa::streams() const {
	cout << "Dua Lipa's levitating has " << Streams << " streams\n";
}
void Dua_lipa::setHeight(int k) {
	Height = k;
}
//sets data
void Dua_lipa::setStreams(int k) {
	Streams = k;
}
Dua_lipa::~Dua_lipa() {
	cout << "this is a distructor\n";
}
int main()
{
	cout << "Creating an Creature.\n";
	Creature c;
	c.run();

	cout << "\nCreating a Wizard.\n";
	Wizard w;
	w.run();
	w.hover();

	cout << "\nCreating a Minion.\n"; 
	Minion m; 
	m.run();
	m.setDensity("#f5e050"); 
	m.color();

	cout << "\nCreating a Dua lipa\n";
	Dua_lipa L;
	L.run();
	L.setHeight(123456789);
	L.setStreams(1300000000);
	L.height();
	L.streams();
	
	return 0;
}