#include <bits/stdc++.h>
using namespace std;

// TC = o(n^2) 
int main()
{
    int n; // n is the number of elements in the array
    cout << "Enter size of array : " << endl;
    cin >> n;  
    int arr[n]; // array of size n 
    cout << "Enter elements of array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}