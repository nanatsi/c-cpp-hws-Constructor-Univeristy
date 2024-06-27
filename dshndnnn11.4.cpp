//CH - 230 - A
//a11.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include"Creature.h"
#include<iostream>
using namespace std;

int main() {

    while (1) {
        string str;
        cin >> str;
        if (str == "Wizard") {
            cout << "\nCreating a Wizard.\n";
            //creates W of Wizard
            Wizard* W;
            //allocates memory
            W = new Wizard;
            //uses methods
            W->run();
            W->hover();
            //deallocates memory
            delete W;
            cout << endl;
        }
        //does the same
        if (str == "object1") {
            cout << "\nCreating a Minion.\n";
            Minion* M;
            M = new Minion;
            M->setDensity("#f5e050");
            M->color();
            delete M;
            cout << endl;
        }
        //does the same
        if (str == "object2") {
            cout << "\nCreating a Dua lipa\n";
            Dua_lipa* D;
            D = new Dua_lipa;
            D->setHeight(123456789);
            D->setStreams(1300000000);
            D->height();
            D->streams();
            delete D;
            cout << endl;
        }
        //breaks the cycle if quit is entered
        if (str == "quit") {
            break;
        }
        
    }

    return 0;

}
