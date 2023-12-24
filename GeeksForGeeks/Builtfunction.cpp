#include <bits/stdc++.h>
using namespace std;

swaparray(int arr[], int x)
{
    for (int i = 0; i < x / 2; i++)
    {
        swap(arr[i], arr[x - i - 1]);
    }
    return 0;
}

int main()
{
    int a, b;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << "Entered number is a = " << a << "  b = " << b << endl;
    cout << "The maximum is :" << max(a, b) << endl;
    cout << "The minimum is :" << min(a, b) << endl;
    swap(a, b);
    cout << "After swaping a = " << a << " and b = " << b << endl;

    cout << "Now swapping array  ------>  " << endl ;
    int x;
    cout << "Enter size of array : " << endl;
    cin >> x;
    int arr[x];
    cout << "Enter " << x << " numbers : " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    swaparray(arr, x);

    cout << "After swaping or we can say reverse array is : " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}