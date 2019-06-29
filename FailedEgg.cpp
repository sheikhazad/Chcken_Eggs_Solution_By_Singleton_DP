
#include "FailedEgg.hpp"
#include "FailedChicken.hpp"
#include<iostream>

using namespace std;

//Global variable - 2
//If oFC is created (i.e. FailedChicken() constructor is called) before creating any FailedEgg object then program will run.
//But if FailedEgg() constructor is called before creating oFC then program will crash.
//because FailedEgg() constructor depend on oFC object.
//Problem: Order of global variables creations in different source files is undefined.
//How to solve this problem?
FailedChicken oFC;

FailedEgg::FailedEgg(){

    cout << "FailedEgg Constructor." << endl;
    oFC.displayChicken();
}

void FailedEgg::displayEgg()
{
    cout << "I am hatched to produce chicken." << endl;
}
