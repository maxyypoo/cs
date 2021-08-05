#include <iostream>
#include <cstring>

using namespace std;

void printOut (char arrayino[], int MAX_ARRAY_SIZE)
{
    static bool even = true;
    bool offset = false;

    if (even == true)
    {
      if (MAX_ARRAY_SIZE % 2 == 1)
            {
              offset = true;
              MAX_ARRAY_SIZE++;
            }
      
      for (int i = 0; i < (MAX_ARRAY_SIZE / 2); i++) {
      
        cout << arrayino[2 * i];
      }
      if (offset == true)
           MAX_ARRAY_SIZE--;
    }
        else {
            
            for (int i = 0; i < (MAX_ARRAY_SIZE / 2); i++) {
          cout << arrayino[(2 * i) + 1];
        }
         
        }
  
  if (even == true)
  {
    cout << " ";
    even = false;
    printOut (arrayino, MAX_ARRAY_SIZE);
    
  }
    else {
        even = true;
        cout << endl;
    }
}



int main ()
{
    const int MAX_ARRAY_SIZE = 10001;
    char array1[MAX_ARRAY_SIZE];
    char array2[MAX_ARRAY_SIZE];
    char array3[MAX_ARRAY_SIZE];
    char array4[MAX_ARRAY_SIZE];
    char array5[MAX_ARRAY_SIZE];
    char array6[MAX_ARRAY_SIZE];
    char array7[MAX_ARRAY_SIZE];
    char array8[MAX_ARRAY_SIZE];
    char array9[MAX_ARRAY_SIZE];
    char array0[MAX_ARRAY_SIZE];
    int testCases;
    int tempCases = 0;

    cin >> testCases;

    if (tempCases < testCases){
        cin >> array1;
        tempCases++;
    }
    if (tempCases < testCases){
      cin >> array2;
    tempCases++;
}
if (tempCases < testCases){
  cin >> array3;
tempCases++;
}
if (tempCases < testCases){
  cin >> array4;
tempCases++;
}
if (tempCases < testCases){
  cin >> array5;
tempCases++;
}
if (tempCases < testCases) {
  cin >> array6;
  tempCases++;
}
if (tempCases < testCases){
  cin >> array7;
tempCases++;
}
if (tempCases < testCases){
  cin >> array8;
tempCases++;
}
if (tempCases < testCases){
  cin >> array9;
tempCases++;
}
if (tempCases < testCases){
  cin >> array0;
tempCases++;
}

tempCases = 0;

if (tempCases < testCases){
printOut(array1, strlen(array1));
tempCases++;
}
if (tempCases < testCases) {
  printOut(array2, strlen(array2));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array3, strlen(array3));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array4, strlen(array4));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array5, strlen(array5));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array6, strlen(array6));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array7, strlen(array7));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array8, strlen(array8));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array9, strlen(array9));
  tempCases++;
}
if (tempCases < testCases) {
  printOut(array0, strlen(array0));
  tempCases++;
}

return 0;
}
