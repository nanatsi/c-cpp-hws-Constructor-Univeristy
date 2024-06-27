//CH - 230 - A
//a9.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<iostream>
using namespace std;

float absi(float a) {
	//if a<0, then change its mark
	if (a < 0)
		return -a;
	//if not, then return a 
	else
		return a;
}
int main() {

	int n;
	//reads variable
	cin >> n;
	//uses function
	cout << absi(n) << endl;

	return 0;

}
