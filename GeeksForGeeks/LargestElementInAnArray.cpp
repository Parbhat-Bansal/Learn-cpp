// TC = O(N)  &  SC = O(1)

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0] ;
        for(int i = 1 ; i <n ; i++)
        {
            if(arr[i] > max) 
            {
                max = arr[i] ;
            }
        }
        return max ;
    }
};
