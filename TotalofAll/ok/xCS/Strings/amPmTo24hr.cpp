#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    char arr[10];
    s.copy(arr,10);
    if (arr[8] == 'A')
    {
        if (arr[0] == '1' && arr[1] == '2')
        {
            arr[0] = '0';
            arr[1] = '0';
        }
    }
    else
    {
        if (arr[0] == '1' && arr[1] == '2');
        else{
            arr[0] += 1;
            arr[1] += 2;
        }
        
    }
    arr[8] = '\0';
    s = arr;

    return s;
}

int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
