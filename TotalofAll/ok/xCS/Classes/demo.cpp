#include <iostream>

using namespace std;

class Demo
{
  public :
  
  int* x1;
  int x2;
  char c;
  float* klik;
  
  Demo()
  {
    cout << "suh" <<  endl;
    klik = ((float*) &x2);
    c = '}';
    
  }
  
  ~Demo()
  {
    cout << "Yayeet" << endl;
  }
};

int main ()
{
  Demo k;
  cout << k.x1 << " " << k.x2 << " " << k.c << k.klik << endl;
  
  Demo* nah = new Demo();
  
  cout << nah->x1 << " " << nah->x2 << " " << nah->klik << " " << nah->c << endl;
  
  Demo arrayofdemo[2];
  
  Demo* dynamicDemo = new Demo[5] ();
  
  
  
  delete nah;
  delete[] dynamicDemo;

  
  
  return 0;
}