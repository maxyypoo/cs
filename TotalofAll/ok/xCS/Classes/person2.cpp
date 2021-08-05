#include <iostream>
#include <string>

using namespace std;



class Person
{
 
  string Fname;
  string Lname;
  int age;
  
  public:
   Person()
  {
    cout << "Suh dude, new constructor who dis" << endl;
  }
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
  int ageHolder, amountOfPeople;
  string FnameHolder, LnameHolder;
  
  Person ptr;
  Person* person2 = new Person();
  
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

  cout << "Please enter first name: ";
  cin >> FnameHolder;

  cout << "Please enter last name: ";
  cin >> LnameHolder;

  cout << "Please enter age: ";
  cin >> ageHolder;

  person2 -> setFName(FnameHolder);
  person2 -> setLName(LnameHolder);
  person2 -> setAge(ageHolder);

  person2 -> print();

  delete person2;
  
  return 0;
}