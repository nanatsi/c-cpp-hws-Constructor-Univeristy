//CH - 230 - A
//a12.p2.c
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
	void setFirstN(char* newFirstN) {strcpy(FirstN, newFirstN);}
	void setLastN(char* newLastN) { strcpy(LastN, newLastN);}
	void setBD(char* newBD) { strcpy(BD, newBD); }
	void setLocation(const std::string& newLocation) {Location = newLocation;}
	void setTeam(const std::string& newTeam) { team = newTeam; }
	void setTengo(const std::string& newSpouse) { spouse = newSpouse; }
	//getter methods
	const char* getFirstN() const { return FirstN; }
	const char* getLastN() const { return LastN; }
	const char* getBD() const { return BD;}
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
#endif

