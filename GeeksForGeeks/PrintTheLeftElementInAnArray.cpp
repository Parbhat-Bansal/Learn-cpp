class Solution{
public:
// TC = o(n*logn)) , SC = O(n)
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here   
        sort(a , a+n) ;
        vector<int>result ;
        for(int  i = 0 ; i < n-2 ; i++)
        {
            result.push_back(a[i]) ;
        }
        return result ;
    }
};
// Que link -->
// https://www.geeksforgeeks.org/problems/print-the-left-element2009/1?page=1&category=Arrays&difficulty=School&sortBy=submissions