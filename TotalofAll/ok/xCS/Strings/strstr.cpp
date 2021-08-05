#include <iostream>

using namespace std;

int strlen (char* arr)
{
  int length = 0;
  
  
  for (int i = 0; arr[i] != '\0'; i++)
    length++;
  
 // cout << "core2";
  /*
  while (*(arr++) ) 
    length++;
    
  */
  
  return length;
}

char* strstr (char* str1, char* str2)
{
  int len, len2, counter = 1;
  char* returnPointer;
  bool notFound = true, breakOut = false;
  
  len = strlen(str1);
  len2 = strlen(str2);
  
  for (int i = 0; i < len && !breakOut; i++)
  {
    //cout << "core3";
    counter = 1;
    if (str1[i] == str2[0])
    {
       //cout << "core4";
      for (int k = i + 1; counter < len2 && str1[k] == str2[counter]; k++)
      { //cout << "core5";
        counter++;}
        
      if (counter == len2){
      // cout << "core6";
        returnPointer = &str1[i];
        breakOut = true;
        notFound = false;
      }
    }
  }
  
  if (notFound)
  {
   // cout << "null";
    returnPointer =  nullptr;
  }
  
    return returnPointer;
}

int main ()
{
  char* ptr ;
  int len ;
  int len2 ;

  
  char str1[] = "Out, out brief candle! Life is but a walking shadow.";
  char str2[] = "out brief candle";
  
  //cout << "core1";
  
  ptr = strstr(str1, str2);
  len = strlen(str1);
  len2 = strlen(str2);

  if (ptr == nullptr)
    cout << "Not Found";
  else{
    //Char representations
    cout << *(ptr);
    cout << endl;
    cout << *( ptr + len2 - 1);
    cout << endl;

    //String rep.
    cout << (ptr);
    cout << endl;
    cout << ( ptr + len2 - 1);
    cout << endl;

    //Adress rep.
    cout << ((int*)ptr);
    cout << endl;
    cout << ((int*) ptr + len2 - 1);
    cout << endl;
  }
  
  return 0;
}