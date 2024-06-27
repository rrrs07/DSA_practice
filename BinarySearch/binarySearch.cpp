#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int target){
    int s = 0;
    int e = n-1;
    int mid = 
    (s+e)/2;
    int ans = -1;

    while(s <= e){
        int element = arr[mid];
        if(target == element ){
            return mid;
        }

        else if (target < element){
            // go left
           e =  mid-1;
            
        } 
        else {
            // go right
           s =  mid+1;
          
        }
        //galti
         mid = (s+e)/2;
        
    }
    return ans;
}


int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int target = 70;
    int n = 7 ;
     int ansIndex = binarySearch(arr , n , target);

     if(ansIndex == -1){
        cout<<"Element not found"<<endl;
     }
     else{
        cout<<"Element found at Index: "<< ansIndex <<endl;
     }

     return 0;
}