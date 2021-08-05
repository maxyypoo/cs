#include "prototype.h"


namespace meanOfNumbers
{
  
  float mean (int x, int y) 
  {
    float mean;
    
    mean = (x + static_cast<float>(y)) / 2;
    
    return mean;
  }
  
}