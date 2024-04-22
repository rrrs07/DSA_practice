// take -ve elements one side and +ve elements other side
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;


void shiftNegativeOneSide(int arr[], int n){
    int j= 0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5, -8, 9};
    int n = 7;

    shiftNegativeOneSide(arr, n);


    //print
    cout<<"Printing the array" << endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}