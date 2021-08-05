#include <iostream>
using namespace std;

int main()
{
  double hours, rate, smokefactor, pay;
  
  cout << "How many smoked paprikas did you work mah meng?/n ";
  cin >> hours;
  
  cout << "How much those paprikams wurf meng?/n ";
  cin >> rate;
  
  cout << "Whats the smokefactor bb?/n " ;
  cin >> smokefactor;
    
  
  pay= hours*rate*smokefactor;
    
    cout << "You got holy penos maing $" << pay << endl;
  return 0;
}