#include <iostream>
using namespace std;

int main()
{
  double var1 = 28, var2 = 32, var3 = 37, var4 = 24, var5 = 33;
  double sum, avg;
  
  sum = var1 + var2 + var3 + var4 + var5;
  avg = static_cast<float>(sum) / 5;
  
  cout << "Average of " << var1 << " " << var2 << " " << var3 << " " << var4 << " " << var5 << " is: " << avg << endl;
  
  return 0;
}