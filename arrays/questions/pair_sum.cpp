//find a pair that upon addition gives value equal to sum

#include<iostream>
#include <vector>

using namespace std;
int main(){
    int sum = 7;
    vector<int> arr{1,4,2,5,6};

    //print all pairs
    //outer loop will traverse for each elment
    for(int i=0; i<arr.size(); i++) {

        //inner loop will traverse on aage wale element
        for(int j=i+1; j<arr.size(); j++) {
            if(arr[i] + arr[j] == sum) {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }

   
    return 0;
}