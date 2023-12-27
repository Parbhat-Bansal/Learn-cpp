
// TC = O(N)  & SC = O(1)

class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // x: element to be searched for
    int search(int arr[], int n, int x)
    {
        int i;
        
        // iterate over the array elements
        for (i=0; i<n; i++)
        {
            // check if the element is equal to x
           if (arr[i] == x)
                return i;
        }
        return -1;
    }

};
// Que link --->
//  https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?page=1&category=Arrays&difficulty=Basic&sortBy=submissions