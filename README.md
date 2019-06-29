# Chcken_Eggs_Solution_By_Singleton_DP

We know that chickens hatch from eggs and eggs are laid by chickens.
But the problem is "which came first: the chicken or the egg?"

Same is the case of global objects creation - we are not sure which global variable is created first and which one after
when they are in different source files. 
( Global objects are created before running main() function)

Let's show this by using programs:

A] Possible Failed case: Global variables ==> See all FailedXXX.hpp/cpp files

 1) FailedMain.cpp has a global variable - FailedEgg oFE
 2) FailedEgg.cpp has a global variable  - FailedChicken oFC and FailedEgg constructor calls oFC.displayChicken()
 3) Here, we are not sure if oFE is created first or oFC is created first as they are in different source files.
    If oFC is created before oFE (i.e calling FailedEgg() constructor), then program works fine.
    But, if oFE (i.e calling FailedEgg() constructor) is created before creating oFC then program will crash, 
    because FailedEgg() constructor depend on oFC object.
 4) Thus program may crash or run successfully i.e. 50-50 chance.


What's the solution? 
   
B] Always Passed case: Solution by Singleton Design Pattern ==> See all PassedXXX.hpp/cpp files
   Here, no global variable is created but replaced by Singleton objects.

  1) As in A].1) Flow is same but PassedMain.cpp use singleton object of PassedEgg instead of global variable
  2) As in A].2) Flow is same but PassededEgg constructor use singleton object of PassedChicken to invoke PassedChicken::displayChicken()
  3) As singleton objects are created at first usage, ordering issue does not exist unlike global variables.
  4) Thus program will run successfully always.   
