#include<iostream>
using namespace std;

int main(){
    int i,n;
    int arr[6] = {1,2,3,1,2,3};
    for (int j = 1; j < n; j++)
    {
        if(arr[i]!= arr[j]);
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}