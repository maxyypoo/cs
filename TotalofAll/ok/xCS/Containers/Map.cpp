#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char tempArray[100000];
    long long int numOfEntries;
    long int phoneNumber, numbHold, endHoldr;
    map <string , long int > phoneBook;
  bool entered = false;

    cin >> numOfEntries;

    for (long long int i = 0; i < numOfEntries; i++)
    {
        cin >> tempArray;
        
        cin >> phoneNumber;

        phoneBook.insert (pair <string, long int> (tempArray, phoneNumber));
 
    }
  
    
    map <string, long int > :: iterator itr;
    for (long long int i = 0; i < numOfEntries; i++)
    {

        cin >> tempArray;
                  
        phoneBook.find (tempArray);
  
        for (itr = phoneBook.find (tempArray); itr != phoneBook.end(); itr++){
            cout << itr->first << "=" << itr->second << endl;
          entered = true;
          break;
        }
     if (!entered)   
      for (itr = phoneBook.find (tempArray); itr == phoneBook.end(); itr++){
            cout << "Not found." << endl;
          break;
        }
            
        if (tempArray[0] == '0')
            break;
        else
          i--;
        tempArray[0] = '0';
      
    }

    return 0;
}

//for (long long int k = 0; k < 100000 && tempArray[k] != '\0'; k++) {
//  names[k] = tempArray[k];
//}