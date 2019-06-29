#include <iostream>
#include <cstdlib>
#include "FailedEgg.hpp"

using namespace std;

//Global variable - 1
//See constructor of FailedEgg which is dependent on object of FailedChicken.
FailedEgg oFE;

int main()
{
    cout<< "From Failed main. " << endl;
    oFE.displayEgg();

    return EXIT_SUCCESS;
}
