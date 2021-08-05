#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    int binarySequenceTotal, tempCount = 0, totalCount = 0, finalCount = 0;
    bool entered = false;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    float numbTotal = n;

    while (n > 0 || entered)
    {
      
        if (n % 2 == 1)
        {
            tempCount++;
          
        }
        

     else 
        {
            if (finalCount < tempCount)
            finalCount = tempCount;
            tempCount = 0;
        }
        n /= 2;
        
        
      if (n== 0 && entered == false)
       entered = true;
      else
        entered = false;

        
       
    }
    if (finalCount == 0)
      finalCount = 1;
    cout << finalCount;

    return 0;
}
