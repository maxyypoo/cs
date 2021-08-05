#include <iostream>

using namespace std;

class Rectangle
{
  private:
  
    double width;
    double lenght;
  
  public:
  
  void setWidth(double widthP)
  {
    if (widthP > 0)
      width = widthP;
  }
  
  void setLength (double lenghtP)
  {
    if (lenghtP > 0)
      lenght = lenghtP;
  }
  
  double getArea () const
  {
    return (width * lenght);
  }
};

int main ()
{
  Rectangle r1;
  Rectangle r2;
  
  r1.setWidth(100);
  r1.setLength(230);
  cout << r1.getArea();
  
  

  
  return 0;
}