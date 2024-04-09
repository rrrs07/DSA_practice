 #include<iostream>

using namespace std;

void transpose(int arr[3][3], int rows, int cols, int Transpose[3][3]){
    for(int i = 0; i<rows ; i++){
        for(int j = 0; j<cols; j++){
            Transpose[j][i] = arr[i][j];
        }
    }
}

void printArray(int arr[3][3], int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int rows = 3;
    int cols = 3;

   cout<<"printig array "<<endl;
   printArray(arr,rows,cols);

   cout<<"starting transpose "<<endl;
   int Transpose[3][3];
   transpose(arr,rows,cols,Transpose);

   cout<<"printing array after transpose "<<endl;
   printArray(Transpose,rows,cols);
    
}