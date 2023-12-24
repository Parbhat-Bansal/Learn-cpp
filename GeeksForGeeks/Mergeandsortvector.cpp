#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, p, q;
    cout << "Enter size of two vectore : " << endl;
    cin >> x >> y;
    int z = x + y;
    vector<int> A(x, 0);
    vector<int> B(y, 0);
    cout << "Enter " << x << " elements of first vector : " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> A[i];
    }
    cout << "Enter " << y << " elements of second vector : " << endl;
    for (int i = 0; i < y; i++)
    {
        cin >> B[i];
    }
    vector<int> C(z, 0);
    for (p = 0; p < x; p++)
    {
        C[p] = A[p];
    }
    for (q = 0; q < y; q++)
    {
        C[p] = B[q];
        p++;
    }
    sort(C.begin(), C.end());
    for (int i = 0; i < z; i++)
    {
        cout << C[i] << " ";
    }
    return 0;
}
