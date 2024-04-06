#include<iostream>
#include <vector>
using namespace std;

int main(){
    //sort 0's and 1's  

    vector<int> arr{0,1,0,1,1,0,1,0,0,1};

    int start = 0;
    int end = arr.size()-1;
    int i=0;

    while(i != end) {
        if(arr[i] == 0) {
            //swap from left
            swap(arr[i], arr[start]);
            i++;
            start++;
            
        } else{
            //swap from right
            swap(arr[i], arr[end]);
            end--;
    }

    //print
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}