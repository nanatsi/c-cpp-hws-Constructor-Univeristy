//CH - 230 - A
//a10.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <iostream>
#include <cstdlib>
#include "Critter.h"



int main(int argc, char** argv)
{
   
    Critter c1;
    //sets hunger to 2
    c1.setHunger(2);
    c1.printi();
    Critter c2("Name2");
   
    c2.setHunger(2);
    c2.printi();
    Critter c3("Name3", 2, 11, 22);
   
    c3.printi();
    Critter c4("Name4", 2, 33);
   
    c4.printi();
    Critter c5("Name", 21, 5, 6, 27);

   

    return 0;
}