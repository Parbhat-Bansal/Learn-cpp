//  TC = O(n)  &  SC = O(1)


class Solution{
    public:
    int lastIndex(string s) 
    {
        bool x = false;
        int n = s.length(); 
        for (int i = n - 1 ; i >= 0 ; i--) {
            if (s[i] == '1') {
                x = true; 
                return i; 
                break; 
            }
        }

        if (x == false) 
        {
            return -1;
        }
    }

};

// Que link -->
// https://www.geeksforgeeks.org/problems/last-index-of-15847/1?page=1&category=Arrays&difficulty=Basic&sortBy=submissions