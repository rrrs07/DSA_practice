#include<iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr) {
    int ans = 0;
    for(int i=0; i<arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: "<<endl;
    //taking input
    for(int i=0; i<arr.size(); i++) {
        cin>>arr[i];
    }

    //unique element
    int uniqueElement = findUnique(arr);
    cout<<"Unique element: "<<uniqueElement<<endl;

    return 0;
}