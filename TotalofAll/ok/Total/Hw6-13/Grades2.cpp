/*
Filename: Grades2.cpp
Description: A demo of <iomanip> and <string>. It shows the usage of setprecision and getline functions.
Assignment: In-class 6/13 - streaming variables.
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  float gradeA, gradeB, gradeC;
  string fName;
  cout << "Enter your name: ";
  getline(cin, fName) ;
  cout << "Enter your grades: ";
  cin >> gradeA >> gradeB >> gradeC;
  float avg = (gradeA + gradeB + gradeC) / 3;
  cout << "Hi! " << fName << " Your average grade is: " << setprecision(1) << fixed << avg << endl;
  return 0;
}

/*
[dakpinar@hills Hw6-13]$ ./a.out
Enter your name: Doga Akpinarogle
Enter your grades: 65 100 25
*/