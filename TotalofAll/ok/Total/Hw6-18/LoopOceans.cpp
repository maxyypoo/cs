/*
Filename: LoopOceans.cpp
Description: Calculating ocean levels over periods of years using loop process.
Assignment: Hw 6/18 Looping 03
*/
#include <iostream>
using namespace std;

int main()
{
  const float OCEAN_LEVELS = 1.5;
  int time = 0;
  
  
  for(time = 1; time < 26; time++)
    cout << "Oceans will rise " << time * OCEAN_LEVELS << " in the next " << time << " years." << endl;
  
    return 0;
}
/*
[dakpinar@hills Hw6-18]$ ./a.out
Oceans will rise 1.5 in the next 1 years.
Oceans will rise 3 in the next 2 years.
Oceans will rise 4.5 in the next 3 years.
Oceans will rise 6 in the next 4 years.
Oceans will rise 7.5 in the next 5 years.
Oceans will rise 9 in the next 6 years.
Oceans will rise 10.5 in the next 7 years.
Oceans will rise 12 in the next 8 years.
Oceans will rise 13.5 in the next 9 years.
Oceans will rise 15 in the next 10 years.
Oceans will rise 16.5 in the next 11 years.
Oceans will rise 18 in the next 12 years.
Oceans will rise 19.5 in the next 13 years.
Oceans will rise 21 in the next 14 years.
Oceans will rise 22.5 in the next 15 years.
Oceans will rise 24 in the next 16 years.
Oceans will rise 25.5 in the next 17 years.
Oceans will rise 27 in the next 18 years.
Oceans will rise 28.5 in the next 19 years.
Oceans will rise 30 in the next 20 years.
Oceans will rise 31.5 in the next 21 years.
Oceans will rise 33 in the next 22 years.
Oceans will rise 34.5 in the next 23 years.
Oceans will rise 36 in the next 24 years.
Oceans will rise 37.5 in the next 25 years.
*/