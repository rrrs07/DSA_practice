#include <iostream>

using namespace std;
// bool search(int arr[], int size, int key){

//     for(int i=0; i<size ; i++){
//         if(arr[i]==key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }


// int main()
// {
//    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

//    cout<<"enter the key"<<endl;
//    int key;
//    cin>>key;

//    bool found = search(arr , 10 , key);

//    if(found){
//     cout<<"key is present"<<endl;
//    }
//    else{
//     cout<<"key is absent"<<endl;
//    }
   
//    return 0;
// }




// lenear search

// #include<iostream>
// using namespace std;

// function of find

// bool find(int arr[], int size, int key){
//     for(int i=0;i<size; i++){
//         if(arr[i]==key)
//         return true;
//     }
//     return false;
// }


// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int size=5;

//     cout<<"enter the key to find"<< endl;
//     int key;
//     cin>>key;

//     if(find(arr , size, key)){
//         cout<<"found "<<endl;
//     }

//     else{
//         cout<<"not found "<<endl;
//     }


//     return 0;
// }


// another method

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size = 8;

    int key=15;

    bool flag=0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==key){
            flag=1;
            break;
        }
    }

    if(flag)
    cout<<"presentr"<<endl;
    else
    cout<<"absent"<<endl;

    return 0;
}
 