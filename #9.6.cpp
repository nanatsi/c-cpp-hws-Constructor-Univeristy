//CH - 230 - A
//a9.p6.c++
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int myfirst(int arr[], int size) {
	
	int k=-1;

	for (int i = 0; i < size; i++) {
		//if it's even and positive 
		if (arr[i] % 2 == 0 && arr[i] > 0) {
			//update k and brake the cycle
			k = arr[i];
			break;
		}		
	}
	return k;	
}

double myfirst(double arr[], int size) {
	double k = -1.1;
	for (int i = 0; i < size; i++) {
		//if is negative and has no fractional part
		if (arr[i] < 0 && (arr[i] - (int)arr[i]) == 0) {
			//update k to that elemnt and break the cycle
			k = arr[i];
			break;
		}
	}
	return k;
}

char myfirst(char str[], int size) {
	char n = '0';
	//checks and if it is not a vowel
	for (int i = 0; i < size; i++) {
		if (tolower(str[i]) != 'a' && tolower(str[i]) != 'e' && tolower(str[i]) != 'i' &&
			tolower(str[i]) != 'o' && tolower(str[i]) != 'u') {
			//updates n and breaks the cycle
			n = str[i];
			break;
		}
	}
	return n;
}





int main() {
	//reads the array of integers
	int intarr[256];
	int size1;
	cin >> size1;
	cin.ignore();
	for (int i = 0; i < size1; i++) {
		cin >> intarr[i];
		cin.ignore();
	}
	//uses the function and shows on the screen
	cout <<"the first positive and even value in the integer array is: " << myfirst(intarr, size1) << endl;
	//does the same in case of double array
	double doubarr[256];
	int size2;
	cin >> size2;
	cin.ignore();
	for (int i = 0; i < size2; i++) {
		cin >> doubarr[i];
		cin.ignore();
	}

	cout << "the first negative and without fraction element in the double array is: " << myfirst(doubarr, size2) << endl;
	//does the same in case of char array
	char chararr[256];
	int size3;
	cin >> size3;
	cin.ignore();
	for (int i = 0; i < size3; i++) {
		cin >> chararr[i];
		cin.ignore();
	}

	cout << "the first consonant in your string is: " << myfirst(chararr, size3) << endl;


	return 0;
}
