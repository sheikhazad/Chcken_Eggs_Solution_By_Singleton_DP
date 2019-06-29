
#include "PassedEgg.hpp"
#include "PassedChicken.hpp"
#include "SingletonDP.hpp"
#include<iostream>

using namespace std;

//No PassedChicken global variable as in FailedEgg.cpp

PassedEgg::PassedEgg(){

    cout << "PassedEgg Constructor." << endl;
    SingletonDP::getPassedChicken()->displayChicken();

    //If you are sure that no one will use PassedChicken Instance
    SingletonDP::resetPassedChicken();

}

void PassedEgg::displayEgg()
{
    cout << "I am hatched to produce chicken." << endl;
}
