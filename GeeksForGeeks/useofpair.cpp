#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> coordinates = make_pair(3, 5);
    cout << "X-coordinate: " << coordinates.first << endl;
    cout << "Y-coordinate: " << coordinates.second << endl;

    coordinates.first = 7;
    coordinates.second = 10;

    cout << "Updated X-coordinate: " << coordinates.first << endl;
    cout << "Updated Y-coordinate: " << coordinates.second << endl;

    return 0;
}
