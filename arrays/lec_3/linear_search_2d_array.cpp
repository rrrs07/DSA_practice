#include<iostream>
using namespace std;

//linear search in 2d array
bool findKey(int arr[3][3], int rows, int cols,int key){
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key)
            return true;
        }
    }
    return false;
    
}
int main(){
    int arr[3][3]= {{1,4,6},
        {2,4,1},
        {3,2,7}
    }; 
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

    //printSum(arr, rows, cols);
    cout<<findKey(arr,3,3,6);
    return 0;
}
