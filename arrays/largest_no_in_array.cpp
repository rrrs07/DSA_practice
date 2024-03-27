#include <iostream>
#include <climits>
using namespace std;

int main() {

    //brute force---- sort the array in assending order


    /*optimal sol----*/
    int ans = INT_MIN;
    int i;
    int arr[5] = {1,3,5,7,9};
    for( i = 0; i<5 ; i++){
        if(ans<arr[i])
        ans=arr[i];
    }
    cout<<"largest no. is: "<<ans;
   
   // another method
   /*
    int i,n = 6;
    int arr[6] = {1,4,2,5,7,8};
    

   
    for(int i = 1; i < n; i++)
    {
        if (arr[i]>arr[0]){
        arr[0] = arr[i];
        }
         
    }
    cout << endl << "Largest element = " << arr[0];
    
   */
}