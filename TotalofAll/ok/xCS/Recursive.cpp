#include <bits/stdc++.h>

using namespace std;

// Complete the factorial function below.
int factorial(int n) {
  static int  nFaux = n;
  static int total = 1;


  
  total *= nFaux;
  nFaux--;

  while (nFaux > 1){

    factorial (nFaux);
  }
  

return total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
