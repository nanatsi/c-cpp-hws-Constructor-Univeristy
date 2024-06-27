//CH - 230 - A
//a12.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include <iostream>
#include "TournamentMember.h"
int main() {
	//creating three players
	Player first("Shota", "Arveladze", "1973-02-22",
		"Dinamo", "tini", 13, 27, "attacker", "right-footed");
	Player second("Archil", "Arveladze", "1990-07-01",
		"Example Team", "teona", 7, 0, "goalkeeper", "left-footed");
	Player third("Rezi", "Arveladze", "1986-11-17",
		"Example Team", "tavartkiladze", 5, 8, "defender", "right-footed");
	//setting location
	first.setLocation("Tbilisi, Georgia");
	Player copyFirst(first);
	copyFirst.printPlayer(); // copying and printing
	first.changeLocation("Hamburg"); // changing location
	// printing to show that the location is changed
	first.printPlayer(); 
	first.incrementGoals(); //showing that the incrementinting goals work
	std::cout << "whoops... Shota scored one more goal, goal count: " << first.getGoals() 
		<<std::endl << std::endl;
	//first.printPlayer();
	second.printPlayer(); 
	third.printPlayer();
	return 0;
}
