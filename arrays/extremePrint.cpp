
// even

#include<iostream>
using namespace std;

int main()
{
    int arr[7]={1,2,3,4,5,7,8};
    int size=7;

    int start=0;
    int end=size-1;

    while(true){
        if(start>end)
        break;


        // in case of odd
        if(start==end){
            cout<<arr[start]<<" " ;     
        }
        // till above

        else{
            cout<< arr[start]<<" ";
            cout<<arr[end]<<" ";
        }

        

        start++;
        end--;
    }
} 





