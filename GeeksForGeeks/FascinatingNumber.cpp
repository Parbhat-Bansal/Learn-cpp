#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <string>

using namespace std;

bool isfascinating(int number)
{
    string concatenate = to_string(number) + to_string(number * 2) + to_string(number * 3);
    if (concatenate.length() != 9)
    {
        return false;
    }
    int count[10] = {0};
    for (int c = 0; c < 9; c++)
    {
        int el = concatenate[c] - '0';
        count[el]++;
        if (count[el] > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int x;
    cout << "Enter a number :" << endl;
    cin >> x;
    if (isfascinating(x))
    {
        cout << x << " is a fascinating number  " << endl;
    }
    else
    {
        cout << x << " is not a fascinating number  " << endl;
    }
    return 0;
}
