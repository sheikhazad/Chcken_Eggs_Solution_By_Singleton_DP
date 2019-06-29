#include <iostream>
#include <cstdlib>
#include "SingletonDP.hpp"
#include "PassedEgg.hpp"

using namespace std;

//No more PassedEgg global variable as in FailedMain.cpp
int main()
{
    cout<<"Solution by Singleton Design Pattern: " << endl << endl;
    SingletonDP::getPassedEgg()->displayEgg();

    return EXIT_SUCCESS;
}
