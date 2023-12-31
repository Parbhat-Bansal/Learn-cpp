#include <bits/stdc++.h>
using namespace std;

vector<int> digit1(vector<int> A, int y)
{
    int size = A.size();
    cout << endl
         << "The size is " << size << endl;
    long long num = 0, prc = 1;
    for (int i = y - 1; i >= 0; i--)
    {
        num = num + A[i] * prc;
        prc = prc * 10;
    }
    long long a = num + 1;
    vector<int> B;
    while (a > 0)
    {
        int digit = a % 10;
        B.insert(B.begin(), digit); 
        a /= 10;
    }
     for (int i = 0; i < B.size(); i++)
    {
         cout << B[i] << " " ;
    }
    return B;
}

int main()
{
    int x;
    cout << "Enter the size of vector: " << endl;
    cin >> x;
    vector<int> v(x);
    cout << "Enter the elements of the vector: " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    vector<int> result = digit1(v, x);
    cout << endl
         << endl
         << "The vector is " << endl;
    for (int i = 0; i <= x; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}