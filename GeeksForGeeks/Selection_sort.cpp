#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter size of an array" << endl;
    cin >> x;
    int arr[x];
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of an array are" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < x; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < x; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
    cout << endl
         << "The sorted elements of an array are" << endl;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
