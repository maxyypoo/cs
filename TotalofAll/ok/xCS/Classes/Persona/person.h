#include <string>

using namespace std;
  
class Person
{
private:
string firstName ;
string lastName ; 
int age;

public:

void print();

~Person () ;  
Person (int ageP, string firstNameP, string lastNameP)  ;
 
};

