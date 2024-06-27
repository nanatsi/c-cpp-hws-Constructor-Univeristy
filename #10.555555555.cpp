/*
CH-230-A
a10_p5.c
Daviti Katamadze
dkatamadze@constructor.university
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    Critter c1;
    c1.setHeight(2);
    //using constructor for first critter
    //and setting height to 2

    c1.print();
    //printing first critter's info


    string name2 = "second one";
    Critter c2(name2);
    c2.setHeight(2);
    //using constructor for second critter
    //and setting height to 2

    c2.print();
    //printing second critter's info


    string name3 = "third one";
    Critter c3(name3, 8, 4, 2);
    //using constructor for third critter

    c3.print();
    //printing third critter's info


    string name4 = "fourth one";
    Critter c4(name4, 8, 4);
    c4.setHeight(2);
    //using constructor for fourth critter
    //and setting height to 2

    c4.print();
    //printing fourth critter's info

    return 0;
}