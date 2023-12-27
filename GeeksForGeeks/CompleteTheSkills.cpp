// TC & SC = O(1) 

class Solution{
    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        // Your code goes here
        for(int i = 0 ; i < 3 ; i++)
        {
            if(a[i] > b[i]) 
            {
                ca++ ;
            }
            else if(b[i] > a[i])
            {
                cb++ ;
            }
        }
    }
};

// Que link -->
// https://www.geeksforgeeks.org/problems/compete-the-skills5807/1?page=1&category=Arrays&difficulty=School&sortBy=submissions