/*
Filename: Geometry.cpp
Description: A calculator that utilizes a menu and switch command to calculate areas of varius geometrical shapes.
Assignment: Expressions7 ADV - 6/21
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  //Variables
  const float NUMBER_PI = 3.14159;
  float radiusOfCircle, areaOfCircle, widthOfRect, lengthOfRect, areaOfRect, baseOfTri, heightOfTri, areaOfTri;
  int userChoice;
  bool invalidUserInput = false;
  
  //Do while loop for the menu
  do
  { 
    //Menu for user selection, output.
    cout << "\n";
    cout << "Welcome to geometry calculator\n";
    cout << setw(30) << setfill('*') << "\n";
    
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n"; 
    cout << "3. Calculate the Area of a Triangle\n"; 
    cout << "4. Quit\n";
    
    //Input
    cout << "To select an option, enter [1-4]:  ";
    cin >> userChoice;
    cout << "\n";
    
    //bool for validation
    invalidUserInput = (userChoice < 1) || (userChoice > 4);
  
    if (invalidUserInput)
      cout << "Please enter a number between 1 and 4.\n";
    else
    {
      //Switch for menu options
      switch(userChoice)
      {
        case 1:
          //input
          cout << "Please enter the radius of circle: ";
          cin >> radiusOfCircle;
          
          //Validation and processing
          invalidUserInput = radiusOfCircle < 0;
          areaOfCircle = NUMBER_PI * (pow(radiusOfCircle, 2));
          
          //output if validated
          if (invalidUserInput)
            cout << "Please enter a number above or equal to 0.\n";
          else
            cout << "Area of the circle is " << areaOfCircle << " units^2\n";
          break;
          
        case 2:
          //input
          cout << "Please enter the width of the rectangle: ";
          cin >> widthOfRect;
          cout << "Please enter the length of the rectangle: ";
          cin >> lengthOfRect;
          
          //validation and processing
          invalidUserInput = widthOfRect < 0 || lengthOfRect < 0;
          areaOfRect = widthOfRect * lengthOfRect;
          
          //Output
          if (invalidUserInput)
            cout << "Please enter a number above or equal to 0.\n";
          else
            cout << "Area of the rectangle is " << areaOfRect << " units^2\n";
          break;
          
        case 3:
          //Input
          cout << "Please enter the base length of triangle: ";
          cin >> baseOfTri;
          cout << "Please enter the height of triangle: ";
          cin >> heightOfTri;
          
          //Validation and processing
          invalidUserInput = baseOfTri < 0 || heightOfTri < 0;
          areaOfTri = baseOfTri * heightOfTri * 0.5;
          
          //Output
          if (invalidUserInput)
            cout << "Please enter a number above or equal to 0.\n";
          else
            cout << "Area of the triangle is " << areaOfTri << " units^2\n";
          break;
          
        case 4:
          //Exit output
          cout << "Thank you for choosing to use this calculator.\n";
          break;
          
          //A trailing default
        default:
          cout << "Please enter a valid number.\n";
      } 
    }
  }while (userChoice != 4);
  
  return 0;
}
/*
[dakpinar@hills Hw6-21]$ ./a.out

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  2

Please enter the width of the rectangle: 6
Please enter the length of the rectangle: 5
Area of the rectangle is 30 units^2

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  1

Please enter the radius of circle: 3
Area of the circle is 28.2743 units^2

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  3

Please enter the base length of triangle: 5
Please enter the height of triangle: 4
Area of the triangle is 10 units^2

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
To select an option, enter [1-4]:  1

Please enter the radius of circle: -5
Please enter a number above or equal to 0.

Welcome to geometry calculator
*****************************
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
To select an option, enter [1-4]:  4

Thank you for choosing to use this calculator.
*/
















