#include<iostream>
#include <vector>
using namespace std;    

int main(){
    int arr[] = {1,4,2,5,6}; 
    int sizeA = 5;
    int brr[] = {2,3,5,7};
    int sizeB = 4;

    vector<int> ans;

    //push back all elements of vector arr
    for(int i=0; i<sizeA; i++) {
        ans.push_back(arr[i]);
    }

    //push back all elements of vector brr
    for(int i=0; i<sizeB; i++) {
        ans.push_back(brr[i]);
    }
   
   //print ans
   cout<<"Union of the two arrays: "<<endl;
   for(int i=0; i<ans.size(); i++) {
       cout<<ans[i]<<" ";
    }
    return 0;
}