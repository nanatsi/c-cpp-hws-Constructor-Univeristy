//CH - 230 - A
//a9.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
using namespace std;

void swapping(int&a, int&b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
} // swap ints
void swapping(float& a, float& b) { 
	float temp;
	temp = a;
	b = a;
	b = temp;
} // swap floats
void swapping(const char*&c, const char*&r) { 
	const char* temp;
	temp = c;
	c = r;
	r = temp;
} // swap char pointers
int main(void) {
	int a = 7, b = 15;
	float x = 3.5, y = 9.2;
	const char *str1 = "One";
	const char *str2 = "Two";
	//copied from the task just made it more visible
	cout << "a= " << a << "\n" << "b= " << b << endl;
	cout << "x= " << x << "\n" << "y = " << y << endl;
	cout << "str1= " << str1 << "\n" << "str2= " << str2 << endl;

	//uses functions 
	swapping(a, b);
	swapping(x, y);
	swapping(str1, str2);
	//shows on the screen
	cout << "a= " << a << "\n" << "b= " << b << endl;
	cout << "x= " << x << "\n" << "y = " << y << endl;
	cout << "str1= " << str1 << "\n" << "str2= " << str2 << endl;
	
	return 0;
}