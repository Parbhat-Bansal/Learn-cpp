   #include <bits/stdc++.h>
   using namespace std ; 
   vector<int> digit1(vector<int> A, int y) {
   int n = A.size() ;
   int carry = 1 , sum = 0 ; 
   for(int i = n-1 ; i>=0 ; i--)
   {
       sum = A[i] + carry ;
       carry = sum / 10 ;
       A[i] = sum % 10 ;
   }
   
   if(carry > 0)
   {
       A.insert(A.begin() , carry ) ;
   }
   
   while(A.size() > 1 && A[0] == 0)
   {
       A.erase(A.begin()) ;
   }
   return A ;
   
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
    for (int i = 0; i <= result.size() ; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

// Que link
//  https://www.interviewbit.com/problems/add-one-to-number/