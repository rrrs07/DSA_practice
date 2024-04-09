#include<iostream>
#include<climits>

using namespace std;

int getMin(int arr[3][3], int rows, int cols){
    int min = INT_MAX;
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int rows = 3;
    int cols = 3;

    //printing array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"the min no is: "<<getMin(arr,rows,cols);
}