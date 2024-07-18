// brute force solution

// sort it using any sorting method in ascending order and return the last element n-1

// Time complexity: O(n log n)

//no better solution 

// optimal solution
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = arr[0];
        for(int i = 0; i<n;i++){
            if(arr[i]> arr[0]){
                max = arr[i];
                
            }
                
            }
            return max;
    }
};