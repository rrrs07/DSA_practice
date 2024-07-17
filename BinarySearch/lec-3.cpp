#include<iostream>
using namespace std;

// int getQuotient(int divisor, int dividend){
//     int s = 0;
//     int e = dividend;
//     int ans = -1;
    
//     while(s <= e){
//         int mid = s+ (e-s)/2;

//         if(mid * divisor == dividend){
//             return mid;
//         }
//         if(mid * divisor < dividend){
//             ans = mid;

//             s = mid+1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return ans;
// }



/*nearly sorted array || when the given array is not sorted */\
int searchNearlySorted(int arr[] , int n , int target){
    int s = 0;
    int e = n-1;
    

    while(s <= e){
        int mid = s + (e-s)/2;
        if(mid-1>= 0 && arr[mid-1] == target){
            return mid-1; 
        }
        if(arr[mid] == target){
            return mid;
        }
        if(mid + 1 < n && arr[mid+1] == target){
            return mid+1;
        }
        if(target > arr[mid]){
            //right
            s = mid+2;
            // mid+2 is liye kiye taki agar jo element pehle check ho chuka hai wo dubara na ho check
        }
        else{
            e = mid - 2;
            // mid-2 is liye kiye taki agar jo element pehle check ho chuka hai wo dubara na ho check
        }
    }
    return -1;
}



int main (){
    // int divisor = -7;
    // int dividend = -29;

    // int ans = getQuotient(abs(divisor), abs(dividend));

    // // to tackle -ve nos.
    // if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0 )){
    //     ans = 0 - ans;
    // }

    // cout << " Final ans is : "<< ans <<endl;


    /*nearly sorted array || when the given array is not sorted */
    int arr[] = {20,30,40,10,70,60,50};
    int n = 7;
    int target = 60;

    int targetIndex = searchNearlySorted(arr, n, target);

    if( targetIndex == -1){
        cout <<"Element not found"<<endl;
    } 
    else{
        cout <<"Element found at Index: "<<targetIndex <<endl;
    }


   
   

}