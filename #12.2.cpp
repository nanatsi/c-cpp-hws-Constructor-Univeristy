//CH - 230 - A
//a12.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include "TournamentMember.h"
int main() {
	TournamentMember a( "Tamuna", "msxvilidze", "1985 - 03 - 08",
		"dankaras reali", "Tengo");
	a.setLocation("xashuri");
	a.print(); // creating with parametric constructor and printing
	TournamentMember b;
	b.print(); // creating with empty constructor and printing
	TournamentMember copyA(a);
	copyA.print(); // copying and printing
	a.changeLocation("Sviri"); // changing location
	// printing to show that the location is changed
	a.print();
	b.changeLocation("default ghoresha");
	b.print();
	return 0;
}
