
#include<iostream>
#include<vector>
using namespace std;

int main() {

    //dynamic array ---- when the space is full, it will double the size and copy the elements to the new array
    
    //create vector
    vector<int> arr;

    // int ans = (sizeof(arr) / sizeof(int));
    // cout<<ans<<endl;

    //no. elements present----size 
    cout<<arr.size()<<endl;

    //total capacity of the array to held elements
    cout<<arr.capacity()<<endl;

    //insert elements
    arr.push_back(10);
    arr.push_back(20);

    //print
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //remove/delete
    arr.pop_back();

    //print
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int> brr(n, 5);
    cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;

    for(int i=0; i<brr.size(); i++) {
        cout<<brr[i]<<" ";
    }

    //negligible use
    vector<int> crr{1, 2, 3, 4, 5};
    cout<<"printing crr: "<<endl;

    for(int i=0; i<crr.size(); i++) {
        cout<<crr[i]<<" ";
    } 

    return 0;
}