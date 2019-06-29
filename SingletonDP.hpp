
#ifndef SingletonDP_HPP_INCLUDED
#define SingletonDP_HPP_INCLUDED

class PassedEgg;
class PassedChicken;

class SingletonDP
{
public:

    static PassedEgg*      getPassedEgg();
    static PassedChicken*  getPassedChicken();

    //Call it when you do not need PassedEgg instance any more
    static void   resetPassedEgg();
    //Call it when you do not need PassedChicken instance any more
    static void   resetPassedChicken();

private:

    static PassedEgg      *ptrPE;
    static PassedChicken  *ptrPC;

    SingletonDP(){}
};

#endif
