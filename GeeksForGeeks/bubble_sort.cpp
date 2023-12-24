#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cout << "Enter size of an array : " << endl;
    cin >> x;
    int arr[x];
    cout << "Enter the elements of an array : " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 1; j < x - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    cout << "After Bubble sort : " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
