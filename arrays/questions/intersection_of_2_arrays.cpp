#include<iostream>
#include<climits>
#include <vector>

using namespace std;

int main(){
    int arr[] = {1,2,2,5,5}; 
    int sizeA = 5;
    int brr[] = {2,2,5,5};
    int sizeB = 4;

    vector<int> ans;

    for(int i=0; i<sizeA; i++) {
        for(int j=0; j<sizeB; j++) {
            if(arr[i] == brr[j]) {
                //mark the element as visited
                brr[j] = INT_MIN;

                //to deal with duplicates
                if(brr[i] != INT_MIN)
                {
                    ans.push_back(arr[i]);
                    
                }
            }
        }
    }

    cout<<"Intersection of the two arrays: "<<endl;
    for(auto value: ans) {
        cout<<value<<" ";
    }
    return 0;
}