#include<iostream>
#include<climits>
using namespace std;

int main(){
    int i,large , slarge;
    int arr[6] = {1,3,5,7,4,9};
    large = arr[0];
    slarge = arr[0];
    for(i = 0; i < 6 ; i++){
        if(large<arr[i])
        large = arr[i];
    }
    for(i = 0; i < 6 ; i++){
        if(slarge<arr[i]){
            if(arr[i]!= large)
            slarge = arr[i];
        }
        
    }
    cout<<"\nSecond Largest Element: " <<slarge;
}
