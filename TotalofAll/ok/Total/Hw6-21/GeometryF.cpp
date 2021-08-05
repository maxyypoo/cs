/*
Filename: GeometryF.cpp
Assignment: Functions6 6/21
Description: Using functions to create a multi use calculator for calculating areas
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function Prototypes
void calcCircle();
void calcRect();
void calcTri();

int main()
{
  //Variables, bool for validation
  int userChoice;
  bool invalidUserInput = false;
  
  //Do while loop for the menu
  do
  { 
    //Menu output
    cout << "\n";
    cout << "Welcome to geometry calculator\n";
    cout << setw(30) << setfill('*') << "\n";
    
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n"; 
    cout << "3. Calculate the Area of a Triangle\n"; 
    cout << "4. Quit\n";
    
    //User input
    cout << "To select an option, enter [1-4]:  ";
    cin >> userChoice;
    cout << "\n";
    
    //Validation
    invalidUserInput = (userChoice < 1) || (userChoice > 4);
    
    //Menu selection and function calling based on user input
    if (invalidUserInput)
      cout << "Please enter a number between 1 and 4.\n";
    else
    {
      if (userChoice == 1)
        calcCircle();
      else if (userChoice == 2)
        calcRect();
      else if (userChoice == 3)
        calcTri();
      else if (userChoice == 4)
        cout << "Thank you for using this calculator. Goodbye.\n";
    }
  }while (userChoice != 4);
  
    return 0;
}

void calcCircle()
{
  //Variables, bool for validation
  const float NUMBER_PI = 3.14159;
  float radiusOfCircle, areaOfCircle;
  bool invalidUserInput = false;
  
  //User input
  cout << "Please enter the radius of circle: ";
  cin >> radiusOfCircle;
  
  //Processing 
  invalidUserInput = radiusOfCircle < 0;
  areaOfCircle = NUMBER_PI * (pow(radiusOfCircle, 2));
  
  //Output and void termnination
  if (invalidUserInput)
    cout << "Please enter a number above or equal to 0.\n";
  else
    cout << "Area of the circle is " << areaOfCircle << " units^2\n";
}

void calcRect()
{
  //Variables, bool for validation
  float widthOfRect, lengthOfRect, areaOfRect;
  bool invalidUserInput = false;
  
  //user input
  cout << "Please enter the width of the rectangle: ";
  cin >> widthOfRect;
  cout << "Please enter the length of the rectangle: ";
  cin >> lengthOfRect;
  
  //Processing
  invalidUserInput = widthOfRect < 0 || lengthOfRect < 0;
  areaOfRect = widthOfRect * lengthOfRect;
  
  //Output and void termnination
  if (invalidUserInput)
    cout << "Please enter a number above or equal to 0.\n";
  else
    cout << "Area of the rectangle is " << areaOfRect << " units^2\n";
}

void calcTri()
{
  //Variables, bool for validation
  float baseOfTri, heightOfTri, areaOfTri;
  bool invalidUserInput = false;
  
  //User input 
  cout << "Please enter the base length of triangle: ";
  cin >> baseOfTri;
  cout << "Please enter the height of triangle: ";
  cin >> heightOfTri;
  
  //Processing
  invalidUserInput = baseOfTri < 0 || heightOfTri < 0;
  areaOfTri = baseOfTri * heightOfTri * 0.5;
  
  //Output and void termnination
  if (invalidUserInput)
    cout << "Please enter a number above or equal to 0.\n";
  else
    cout << "Area of the triangle is " << areaOfTri << " units^2\n";
}
/*
[dakpinar@hills Hw6-21]$ ./a.out

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  1

Please enter the radius of circle: 5
Area of the circle is 78.5397 units^2

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  2

Please enter the width of the rectangle: 5
Please enter the length of the rectangle: 6
Area of the rectangle is 30 units^2

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  3

Please enter the base length of triangle: 5
Please enter the height of triangle: 9
Area of the triangle is 22.5 units^2

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  5

Please enter a number between 1 and 4.

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  2

Please enter the width of the rectangle: -9
Please enter the length of the rectangle: 5
Please enter a number above or equal to 0.

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  4

Thank you for using this calculator. Goodbye.
[dakpinar@hills Hw6-21]$
*/