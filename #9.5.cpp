//CH - 230 - A
//a9.p5.c++
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    //asks for a player's name
    string name;
    cout << "players name:" << endl;
    cin >> name;

    int a;
    int dice;
    int count = 0;
    int randomNumber;

    //makes sure that the random number is different every time
    srand(static_cast<unsigned int>(time(0)));

        //picks a random number
        randomNumber = rand();
        dice = (randomNumber % 100) + 1;
        
        //reads till 
        while (1) {

            //updates number of tries
            count++;

            cin >> a;
            //if it's low tell
            if (a < dice) {
                cout << "too low" << endl;
            }
            //if it's high tells
            else if (a > dice) {
                cout << "too high" << endl;
            }
            //breaks when player has guessed
            else {
                cout << "congratulations!\nyou've guessed the number, " << name << " <3\nnumber of tries: " << count << endl;
                break;
            }

        }

       

    return 0;
}
