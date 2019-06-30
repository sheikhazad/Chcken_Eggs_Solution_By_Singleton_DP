# Chcken_Eggs_Solution_By_Singleton_DP

We know that chickens hatch from eggs and eggs are laid by chickens.
But the problem is "which came first: the chicken or the egg?"

Same is the case of global objects creation - we are not sure which global variable is created first and which one after
when they are in different source files. 

Let's show this by using programs:

A] Possible Failed case: Global variables ==> See all FailedXXX.hpp/cpp files

 1) Here, two global variables are used - oFE and oFC, whose order of creation is undefined.
 2) FailedMain.cpp has a global variable - FailedEgg oFE
 3) FailedEgg.cpp has a global variable  - FailedChicken oFC and FailedEgg constructor calls oFC.displayChicken()
 4) Here, we are not sure if oFE is created first or oFC is created first as they are in different source files.
    If oFC is created before oFE (i.e calling FailedEgg() constructor), then program works fine.
    But, if oFE (i.e calling FailedEgg() constructor) is created before creating oFC then program will crash, 
    because FailedEgg() constructor depend on oFC object.
 5) Thus program may crash or run successfully i.e. 50-50 chance.


What's the solution? 
==> One of the possble solution is to use Singleton design pattern.

B] Always Passed case: Solution by Singleton Design Pattern ==> See all PassedXXX.hpp/cpp and SingletonDP.hpp/cpp files

  1) Here, no global variable is created but replaced by Singleton objects.
  2) As in A].1) Flow is same but PassedMain.cpp use singleton object of PassedEgg instead of global object
  3) As in A].2) Flow is same but PassededEgg constructor use singleton object of PassedChicken to invoke PassedChicken::displayChicken()
  4) As singleton objects are created at first usage, ordering issue does not exist unlike global objects.
  5) Thus program will run successfully always.   
