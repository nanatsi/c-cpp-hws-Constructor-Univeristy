//CH - 230 - A
//a9.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<iostream>
using namespace std;

int main() {

	int n;
	double x;
	string s;
	//rads variables and a string
	cin >> n;
	cin >> x;
	cin >> s;
	//uses loop to print it n times
	for (int i=0; i < n; i++) {
		cout << s << ":" << x << endl;
	}

	return 0;


}