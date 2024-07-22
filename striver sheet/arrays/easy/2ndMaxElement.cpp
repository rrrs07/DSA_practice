// brute force----- sort it and find the second last element by comparing with the n-1 element ..... Tc: O(nlogn + n) = O(nlogn)


// better solution
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
       
        int large = arr[0];
        for(int i = 0; i<n;i++){
            if(arr[i]> arr[0]){
                max = arr[i];
                
            }
                
        }
        
        
        int secondMax = -1;
        for(int i = 0; i<n;i++){
            if(arr[i] > secondMax && arr[i] != max){
                secondMax = arr[i];
                break;
            }
        }
        return -1;
    }
};


// optimal solution
int max = arr[0];
        int secondMax = -1;
        for(int i = 0; i<arr.size();i++){
            if(arr[i]> max){
                secondMax = max;
                max = arr[i];
                
            }
            else if(  arr[i] < max && arr[i] > secondMax  ){
                secondMax = arr[i];
            }   
        }
        
        

