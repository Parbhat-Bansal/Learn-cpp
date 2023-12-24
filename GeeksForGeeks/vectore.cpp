#include <bits/stdc++.h>
using namespace std;

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
    sort(v.begin(), v.end());
    cout << "The sort vector is: " << endl;
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.push_back(6);
    v.push_back(7);

    cout << "Updated vector elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end());
    cout << "Reverse vector elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl ;
    cout << "The size of vector after insertion is :  " << v.size() << endl;

    // Removing the last two elements from the vector using pop_back()
    cout << "After Removing the last five elements the vector become :" ;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "The size of vector at the end of the code is : " << v.size() << endl;

    return 0;
}
