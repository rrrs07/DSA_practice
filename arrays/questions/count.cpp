// find how many 0's and 1's are there in a array

#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,0,0,0,1,1,1,1,0,1,0,1};
    int size=12;

    int numZero=0;
    int numOne=0;

    for(int i=0; i<size  ;i++){

        if(arr[i]==0){
            numZero++;
        }
        if(arr[i]==1){
            numOne++;
        }
    }

    cout<<"no. of zeroes: "<<numZero<<endl;
    cout<<"no. of ones: "<<numOne<<endl;

    return 0;
    
} 

