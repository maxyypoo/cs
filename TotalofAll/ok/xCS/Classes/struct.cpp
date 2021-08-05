#include <iostream>

using namespace std;

struct PayRoll
  {
    int empNumber;
    int payTime;
    double payConst;
  };


int main()
{
  PayRoll employee;
  
  employee.empNumber = 556;
  
  cout << employee.empNumber << endl;
  employee = {678, 23, 15.25};
  
  cout << employee.empNumber << " has earned $" << employee.payTime * employee.payConst;
  
  return 0;
}