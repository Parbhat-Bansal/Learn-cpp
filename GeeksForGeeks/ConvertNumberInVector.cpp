#include <bits/stdc++.h>
using namespace std;

vector<int> numbertovector(int num)
{
    vector<int> res;
    while (num > 0)
    {
        int digit = num % 10;
        res.insert(res.begin(), digit); // Inserting digits at the beginning of the vector
        num /= 10;
    }
    return res ;
}
int main()
{
    int x;
    cout << "Enter a number : " << endl;
    cin >> x;
    vector<int> result = numbertovector(x);
    for(auto digit : result)
    {
        cout << digit << " " ;
    }
    cout << endl ;
    return 0 ;

}
