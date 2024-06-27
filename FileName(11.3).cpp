//CH - 230 - A
//a11.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include"Creature.h"
#include<iostream>
using namespace std;

Creature::Creature() : distance(10) {
	cout << "this is  a constructor\n";
}

void Creature::run() const
{
	cout << "running " << distance << " meters!\n";
}
Creature::~Creature() {
	cout << "this is a distructor\n";
}

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
void print(const Dua_lipa b) {
	std::cout << b.Height << std::endl;
}