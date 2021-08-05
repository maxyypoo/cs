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
  int numOfPeep, len, len2;
  int* ageHolder;
  string FnameHolder1, LnameHolder1;
  char** FnameHolder, LnameHolder;
  
  Person ptr;
  
  cout << "Please enter the amount of people: ";
  cin >> numOfPeep;
  
  char** FnameHolder = new int [numOfPeep];
  char** LnameHolder = new int [numOfPeep];
  int* ageHolder = new int [numOfPeep];
  
  
  cout << "Please enter first name: ";
  cin >> FnameHolder1;
  
  cout << "Please enter last name: ";
  cin >> LnameHolder1;
  
  cout << "Please enter age: ";
  cin >> ageHolder;
  
  len = strlen(FnameHolder1);
  len2 = strlen(LnameHolder1);
  
  ptr.setFName(FnameHolder);
  ptr.setLName(LnameHolder);
  ptr.setAge(ageHolder);
  
  ptr.print();
  
  return 0;
}