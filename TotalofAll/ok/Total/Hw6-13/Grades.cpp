/*
Filename: Grades.cpp
Description: A simple grade sheet that demos different data types and strings.
Assignment: Hw6/13 - Variables Strings Adv.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  char fI= 'J';
  char fL= 'T';
  string _name;
  float hw, mid, fin, in_c, in_p, w_Avg;
  _name= "Jim Tony";
  hw= 85;
  mid= 70;
  in_c= 100;
  in_p= 100;
  fin= 80;
  W_Avg= (hw*30/100)+(mid*30/100)+(fin*20/100)+(in_p*10/100)+(in_c*10/100);
  cout << "Student Grade Sheet" << endl;
  cout << "Name: " << _name << endl;
  cout << "Initials: " << fI << ". " << fL << "." << endl;
  cout << "Homework Grades " << endl;
  cout << "Homework: " << hw << endl;
  cout << "In-class work: " << in_c << endl;
  cout << "Test Grades " << endl;
  cout << "Midterm: " << mid << endl;
  cout << "Final: " << fin << endl;
  cout << "Class Participation: " << in_p << endl;
  cout << "Weighted Average: " << W_Avg << endl;
  return 0;
}

/*
[dakpinar@hills Hw6-13]$ ./a.out
Student Grade Sheet
Name: Jim Tony
Initials: J. T.
Homework Grades
Homework: 85
In-class work: 100
Test Grades
Midterm: 70
Final: 80
Class Participation: 100
Weighted Average: 82.5
*/