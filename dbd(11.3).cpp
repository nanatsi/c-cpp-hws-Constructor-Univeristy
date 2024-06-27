//CH - 230 - A
//a11.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include"Creature.h"
#include<iostream>
using namespace std;

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
	print(L);
	return 0;
}