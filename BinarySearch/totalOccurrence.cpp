#include<iostream>
using namespace std;

int findLastOccurrence(int arr[] , int n , int target){
    int s = 0;
    int e = n-1;

    // (s+e)/2 will cause integer overflow so we use this
    //to prevent overflow 
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e){
        int element = arr[mid];
        if(target == element ){
            //store ans
            ans = mid;

            //right me jao
            s = mid + 1;
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
         mid = mid = s + (e - s)/2;
        
    }
    return ans;
}

int findFirstOccurrence(int arr[] , int n , int target){
    int s = 0;
    int e = n-1;

    // (s+e)/2 will cause integer overflow so we use this
    //to prevent overflow 
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s <= e){
        int element = arr[mid];
        if(target == element ){
            //store ans
            ans = mid;

            //left me jao
            e = mid - 1;
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
         mid = mid = s + (e - s)/2;
        
    }
    return ans;
}

int totalOccurrence(int arr[] , int n , int target){
    int firstOccurrence = findFirstOccurrence(arr , n ,target);
    int lastOccurrence = findLastOccurrence(arr , n ,target);
    int total = lastOccurrence - firstOccurrence + 1;
    return total;
}


int main(){
    int arr[] = {10,20,30,30,30,60,70};
    int target = 30;
    int n = 7 ;
     int ans = totalOccurrence(arr , n , target);
     cout<<"total occurrence is:"<< ans<<endl;
}