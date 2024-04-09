#include<iostream>
using namespace std;

void printSum(int arr[3][3], int rows, int cols){
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            sum += arr[i][j];
        }
        cout<<"sum of all elements is: "<<sum<<endl;
    }
    
}
int main(){
    int arr[3][3]; 
    int rows = 3;
    int cols = 3;


    //printing row wise
    cout<<"printing row wise"<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr, rows, cols);
    return 0;
}
