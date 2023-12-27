//  TC = O(n*logn)  & SC = O(1) 
class Solution{
    public:
        int leftElement(int a[], int n) {
            // Your code goes here 
        sort(a, a + n);
        if (n % 2 == 0) {
            return a[(n / 2) - 1];
        } else {
            return a[n / 2];
        }
    }
};

//Question link 
// https://www.geeksforgeeks.org/problems/print-the-left-element2009/1?page=1&category=Arrays&difficulty=School&sortBy=submissions
