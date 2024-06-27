//CH - 230 - A
//a12.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de


#ifndef _TournamentMember
#define _TournamentMember
#include<iostream>
#include <string>
#include <cstring>
class TournamentMember {
public:
	//default constructor
	TournamentMember();
	//parametric constructor
	TournamentMember(const char*, const char*, const char*,
		const std::string&, const std::string&);
	//copy constructor
	TournamentMember(const TournamentMember&);
	//destructor
	~TournamentMember();
	//setter methods
	void setFirstN(char* newFirstN) { strcpy(FirstN, newFirstN); }
	void setLastN(char* newLastN) { strcpy(LastN, newLastN); }
	void setBD(char* newBD) { strcpy(BD, newBD); }
	void setLocation(const std::string& newLocation) { Location = newLocation; }
	void setTeam(const std::string& newTeam) { team = newTeam; }
	void setTengo(const std::string& newSpouse) { spouse = newSpouse; }
	//getter methods
	const char* getFirstN() const { return FirstN; }
	const char* getLastN() const { return LastN; }
	const char* getBD() const { return BD; }
	std::string getLocation() const { return Location; }
	const std::string getTeam() const { return team; }
	const std::string getTengo() const { return spouse; }
	//printing method
	void print();
	//changing location method
	void changeLocation(const std::string newLocation);



private:
	char FirstN[36];
	char LastN[36];
	char BD[11];
	static std::string Location;
	std::string team;
	std::string spouse;

};

class Player : public TournamentMember {
private:
    int goals;
    int number;
    std::string footPreference;
    std::string position;

public:
    //parametric
    Player(const char*, const char*, const char*, const std::string&,
         const std::string&, int, int, const std::string&, const std::string&);
    //copy constructor
    Player(const Player&);
    //destructor
    ~Player();
    //setters
    void setNumber(int newNumber) { number = newNumber; }
    void setFoot(const std::string& newFoot) { footPreference = newFoot; }
    void setPosition(const std::string& newPosition) { position = newPosition; }
    //getters
    int getGoals() const { return goals; }
    int getNumber() const { return number; }
    std::string getPosition() const { return position; }
    std::string getFoot() const { return footPreference; }

    // print method
    void printPlayer();
    // goal increment method
    void incrementGoals();

};
#endif
