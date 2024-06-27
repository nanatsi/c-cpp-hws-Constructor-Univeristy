//CH - 230 - A
//a9.p4.c
// Nana Tsignadze
//ntsignadze@jacobs - university.de

#include<iostream>
#include<string>

using namespace std;

//function in case of integers are passed
int mycount(int a, int b) {
	return b - a;
}
//function in case char and a string is passed
int mycount(char c, string nuki) {
	int i = nuki.size();
	int count=0;
	//loop till n reaches the end of string
	for (int n = 0; n < i; n++) {
		if (nuki[n] == c) {
			//count updates
			count++;
		}
	}
	return count;
}

int main() {
	//declarations
	int a, b;
	char c;
	string nuki;

	//reads from the keyboard
	cin >> a;
	//clears the newline everywhere
	//to read the variables properly
	cin.ignore();
	cin >> b;
	cin.ignore();
	cin >> c;
	cin.ignore();
	//reads the string using getline
	getline(cin, nuki);
	
	
	//shows the computation of functions on the screen
	cout << mycount(a, b) << endl;
	cout << mycount(c, nuki) << endl;


	return 0;
}