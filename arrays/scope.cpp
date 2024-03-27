#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout<<"Inside the function"<< endl;

    arr[0]= 120;

     for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main function"<<endl;
}


int main()
{
    int arr[3] = {1,2,3};
    update(arr,3);


    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


/* Online C++ Compiler and Editor */
// #include <iostream>

// using namespace std;

// int main()
// {
//     int size=5;
    
//     int arr[5]={1,3,5,6,8};
//     int sum=0;
//     for(int i=0; i<size; i++)
//     {
        
//         sum= sum+arr[i];
//     }
//    cout << "SUM OF ELEMENTS OF ARRAY " << sum<< endl; 
   
//    return 0;
// }