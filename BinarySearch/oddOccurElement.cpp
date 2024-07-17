#include<iostream>
using namespace std;

int oddOccur(int arr[] , int n ){
    int s = 0;
    int e = n-1;
    

    while(s <= e){
        // when the mid is at even index
        int mid = s + (e-s)/2;

        //single element
        if (s == e){
            return s;
        }

        // mid check ---- odd or even
        if(mid & 1){
            if(mid-1 >=0 && arr[mid-1] == arr[mid-1]){
                //right 
                s = mid-1; 
            }
            else{
                //left
            e = mid - 1;
            }
        }
        else {
            //even
            if(mid+1 <n && arr[mid] == arr[mid+1]){
                //right
                s = mid+2;
            }
            else{
                // ya toh right pe huin or answe pe huin
                // e = mid
                // because e = mid-1 se ans can be lost
                e = mid;
            }
        }
        
    }    
    return -1;
}

int main (){
   
    int arr[] = {10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n = 13;
    
    int ansIndex =  oddOccur(arr , n);
    cout <<"final ans is: "<<arr[ansIndex]<<endl;
   
   

}