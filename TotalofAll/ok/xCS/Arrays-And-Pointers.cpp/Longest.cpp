#include <iostream>
#include <cstring>
#include <array>

using namespace std;

int main ()
{
  const long int MAX_SIZE = 100000;
  char arrr[MAX_SIZE];
  int stringLenght, tempCount = 0, totalCount = 0, lastCount = 0, n;
  bool charac[255] = {false};
  
  
  
  cin >> arrr;
  
  stringLenght = strlen(arrr);
  
 for (int i = 0; i < stringLenght; i++)
 {

   if (charac[arrr[i]] == false){
  
     tempCount++;
     charac[arrr[i]] = true;
 
   }
     
   else
   {
     fill_n(charac, 255, false);
  
     
     if (tempCount > totalCount){
      totalCount = tempCount;
     lastCount = i - totalCount;
       cout << totalCount;
     }
     tempCount = 0;
   }
    
 }
  
  for (int i = lastCount; i < lastCount + totalCount; i++)
    cout << arrr[i];
  
  cout << endl;
  cout << totalCount;
  
  return 0;
}