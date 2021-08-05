#include <iostream>

using namespace std ;

//----------------------------------


class Person
{
  public:
  string gender ;
  string name ;
  int age ;
  virtual void print()
    {
    cout << "print pres"<< endl;
      cout << "Gender:" << gender << " name:" << name << " age:" <<
      age << endl ;
    }

      Person()
      {
          cout << "wooo2" << endl;
      }
  
  
  
  
      Person(int ageP)
      {
          cout << "wooo2 = age const "<< endl;
        age = ageP;
      }
};

//----------------------------------


class Employee : public Person
{
  public:
    string company ;
    int salary ;
  void print()
    {
      cout << "print emp" << endl;
      cout << "Gender:" << gender << " name:" << name << " age:" <<
      age << " Company:" << company << " Salary:" << salary << endl ;
    }
      
      Employee()
      {
          cout << "wooo" << endl;
      }
      
      
      
      Employee (int ageP) : Person(ageP)
      {
        cout << "Emp age constr" << endl;
      }
};


//----------------------------------

int main()
{

   Employee  employeeObject ;
   employeeObject.gender = "Male" ;
   employeeObject.company = "Google" ;

   cout << "Gender:" << employeeObject.gender << " Company: " << employeeObject.company << endl ;

   //Polymorphism does not work with objects but only with pointers.
   Person personObject ;
   personObject = employeeObject ;
   personObject.print() ;


   Person*  personObject1 ;
   Employee*  employeeObject1 ;

   personObject1 = new Employee() ;
   personObject1->print() ;





 return ( 0 ) ;
}
