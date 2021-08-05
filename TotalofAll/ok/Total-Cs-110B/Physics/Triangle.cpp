#include <cmath>
#include <iostream>
#include <iomanip>

const double PI = 3.14159265359;
const double ANGLE_OF_HYPO = 1.570796327;

float getNumber ();
float angles (char, float, float, float);
float findHypothenuse (float, float);
float findArea (float, float);
float findCircumfrence (float, float, float);
void displayShow (float, float, float, float, float, float, float, float);

int main ()
{
  float hypothenuse, base, opposite;
  float angleOfBase, angleOfOpposite, angleOfHypothenuse;
  float area, circumfrence;
 
  std::cout << "Please enter a base value: ";
  base = getNumber();
  std::cout << "Please enter an opposite value: ";
  opposite = getNumber();
  
  hypothenuse = findHypothenuse(base, opposite);
  
  angleOfBase = angles ('b', base, opposite, hypothenuse);
  angleOfOpposite = angles ('o', base, opposite, hypothenuse);
  angleOfHypothenuse = angles ('h', base, opposite, hypothenuse);
  
  circumfrence = findCircumfrence (base, opposite, hypothenuse);
  area = findArea (base, opposite);
  
  displayShow (base, opposite, hypothenuse, angleOfBase, angleOfOpposite, angleOfHypothenuse, area, circumfrence);
  
  return 0;
}

float getNumber ()
{
  float numberHolder;
  
  std::cin >> numberHolder;
  
  return numberHolder;
}

float findHypothenuse (float base, float opposite)
{
  float hypothenuse;
  
  hypothenuse = sqrt( pow (base, 2) + pow (opposite, 2));
  
  return hypothenuse;
}

float angles (char decider, float base, float opposite, float hypothenuse)
{
  float angle;
  
  if (decider == 'b')
    angle = std::asin(static_cast<float>(opposite) / hypothenuse);
  
  else if (decider == 'o')
    angle = std::asin(static_cast<float>(base) / hypothenuse);
  
  else if (decider == 'h')
    angle = ANGLE_OF_HYPO;
  
  angle = (angle * 180) / PI;
  
  return angle;
}

float findArea (float base, float opposite)
{
  float area;
  
  area = .5 * base * opposite;
  
  return area;
}

float findCircumfrence (float base, float opposite, float hypothenuse)
{
  float circumfrence;
  
  circumfrence = base + opposite + hypothenuse;
  
  return circumfrence;
}

void displayShow (float base, float opposite, float hypothenuse, float angleOfBase, float angleOfOpposite, float angleOfHypothenuse, float area, float circumfrence)
{
  std::cout << "Base: " << base << '\n';
  std::cout << "Opposite: " << opposite << '\n';
  std::cout << "Hypothenus: " << hypothenuse << '\n';
  std::cout << "Angle Of Base: " << angleOfBase << '\n';
  std::cout << "Angle Of Opposite: " << angleOfOpposite << '\n';
  std::cout << "Angle Of Hypothenuse: " << angleOfHypothenuse << '\n';
  std::cout << "Circumfrence: " << circumfrence << '\n';
  std::cout << "Area: " << area << '\n';
}
  
  
  
  
  