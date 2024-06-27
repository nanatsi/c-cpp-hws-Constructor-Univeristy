//CH - 230 - A
//a9.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<iostream>
using namespace std;

void subtract_max(int arr[], int size) {
	
	int k;
	k = arr[0];
	//initializes k variable as the first element
	for (int i = 0; i < size; i++) {
		//updates it to whichever is the highest
		if (k < arr[i]) {
			k = arr[i];
		}
	}
	//demonstrates on the screen
	cout << "new array is: ";
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] - k;
		cout << arr[i] << ", ";
	}

}

void deallocate(int arr[]) {
	//deallocates memory
	delete[] arr;
}

int main() {
	int n;
	cin >> n;
	//allocates memory
	int* arr = new int[n];
	if (arr == NULL) {
		exit(1);
	}
	//reads an array
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		
	}
	cout << "old array is: ";

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ", ";
	}
	//uses function
	cout << endl;
	subtract_max(arr, n);
	deallocate(arr);

	return 0;


}
