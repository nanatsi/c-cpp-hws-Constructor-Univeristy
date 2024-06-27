//CH - 230 - A
//a12.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include"TournamentMember.h"
#include<iostream>
#include<string>
#include<cstring>

//parametric constructor
TournamentMember::TournamentMember(const char* newFirstN, const char* newLastN, const char* newBD,
	const std::string& newTeam, const std::string& newSpouse) {
	std::cout << "this is a parametric constructor" << std::endl;
	strcpy(FirstN, newFirstN);
	strcpy(LastN, newLastN);
	strcpy(BD, newBD);
	team = newTeam;
	spouse = newSpouse;

}
//default location
std::string TournamentMember::Location = "Default Location";
//default constructor
TournamentMember::TournamentMember() {
	std::cout << "this is a default constructor" << std::endl;
	strcpy(FirstN, "default Name");
	strcpy(LastN, "default Lname");
	strcpy(BD, "default BD");
	team = "default team";
	spouse = "default baqari";


}
//copy constructor
TournamentMember::TournamentMember(const TournamentMember& copyTour) {
	std::cout << "this is a copy constructor" << std::endl;
	strcpy(FirstN, copyTour.getFirstN());
	strcpy(LastN, copyTour.getLastN());
	strcpy(BD, copyTour.getBD());
	team = copyTour.getTeam();
	spouse = copyTour.getTengo();
	Location = copyTour.getLocation();
}
//destructor
TournamentMember::~TournamentMember() {
	std::cout << "this is a destructor" << std::endl;
}
//print method
void TournamentMember::print() {
	std::cout << "using printing method" << std::endl;
	std::cout << "Player name: " << FirstN << std::endl;
	std::cout << "Player last name: " << LastN << std::endl;
	std::cout << "Player birth day: " << BD << std::endl;
	std::cout << "Player team: " << team << std::endl;
	std::cout << "Players Spouse: " << spouse << std::endl;
	std::cout << "Player location: " << Location << std::endl << std::endl;

}
//chenging location using setter method
void TournamentMember::changeLocation(const std::string newLocation) {
	std::cout << "changing Location " << std::endl;
	setLocation(newLocation);

}

Player::Player(const char* newFirstN, const char* newLastN, const char* newBD,
	const std::string& newTeam, const std::string& newSpouse,
	int newNumber, int newGoals, const std::string& newFoot,
	const std::string& newPosition) : TournamentMember(newFirstN,
		newLastN, newBD, newTeam, newSpouse) {
	std::cout << "this is a parametric of Player." << std::endl;
	goals = newGoals;
	number = newNumber;
	footPreference = newFoot;
	position = newPosition;

}

Player::Player(const Player& CopyPlayer) {
	std::cout << "this is a copy of Player" << std::endl;
	goals = CopyPlayer.getGoals();
	number = CopyPlayer.getNumber();
	footPreference = CopyPlayer.getFoot();
	position = CopyPlayer.getPosition();

}

Player::~Player() {
	std::cout << "destructing player..." << std::endl;
}

void Player::printPlayer() {
	std::cout << "additional details:" << std::endl;
	print();
	std::cout << "player's Goal count: " << goals << std::endl;
	std::cout << "player's Number: " << number << std::endl;
	std::cout << "player is: " << footPreference << std::endl;
	std::cout << "player's position: " << position << std::endl << std::endl;
}

void Player::incrementGoals(){
	goals++;	
}
