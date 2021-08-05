#include <iostream>
#include <string>

using namespace std;



class Person
{
  string Fname;
  string Lname;
  int age;
  
  public:
  
  void setFName(string nameP)
  {
    Fname = nameP;
  }
  void setLName(string nameP)
  {
    Lname = nameP;
  }
  void setAge(int ageP)
  {
    age = ageP;
  }
  void print()
  {
    cout << Fname << " " << Lname << " " << age << endl;
  }
};
int main ()
{
  int ageHolder;
  string FnameHolder, LnameHolder;
  
  Person ptr;
  
  cout << "Please enter first name: ";
  cin >> FnameHolder;
  
  cout << "Please enter last name: ";
  cin >> LnameHolder;
  
  cout << "Please enter age: ";
  cin >> ageHolder;
  
  ptr.setFName(FnameHolder);
  ptr.setLName(LnameHolder);
  ptr.setAge(ageHolder);
  
  ptr.print();
  
  return 0;
}