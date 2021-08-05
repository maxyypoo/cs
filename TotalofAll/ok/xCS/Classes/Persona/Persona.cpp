
#include <string>
#include <iostream>

#include "person.h"

using namespace std;


 Person::Person (int ageP, string firstNameP, string lastNameP)
  {
    age = ageP;
    firstName = firstNameP;
    lastName = lastNameP;
  }
 
  void Person::print()
  {
    cout << firstName << " " << lastName << " is " << age << " years old" << endl;
  }
  
  Person::~Person ()
  {
    cout << "Yayeeet dude destructor here" << endl;
  }
  
  
