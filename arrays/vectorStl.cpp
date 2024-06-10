#include <iostream>
#include <vector>

using namespace std;

/* void fun(int a[], int n){
    cout<<"array elements are " << endl;
    for(int i = 0; i<n; ++i){
        cout<<a[i]<<endl;
    }
} */


void print(vector<int>v){
    cout<<"vector elements are " << endl;
    int size = v.size();
    for(int i = 0; i<size;i++){
        cout<<v[i]<<endl;
    }
}

int main(){
    
    
   /*  // static mem allocation of array
    // int arr[5] = {1, 2, 3, 4, 5};


    // dynamic mem allocation of array
    int n;
    cin>>n;
    int *arr = new int[n]; // each element would be zero , or garbage value

    // taking n elements as input and inserting into array
    for (int i = 0; i<n; ++i){
        int data;
        cin>>data;
        arr[i] = data;
    }
    fun(arr ,n);
    //let me try to insert more items 
    */

   /* vector<int> v; */

   //inserting elements into vector
  /*  v.push_back(1);  
   v.push_back(2);  
   v.push_back(3);  
   print (v); */

    /* int n;
    cin>>n;
    for (int i = 0; i<n; ++i){
        int data;
        cin>>data;
        v.push_back(data);
    }
    print(v);

    for (int i = 0; i < 10; i++)
    {
        v.push_back(80);
    }
    print(v);
    

    // clear the vector
    v.clear();
    v.push_back(100);
    print(v); 
    */

    //pop -> delete the last element
   // v.pop_back();
    //print (v);


    
}

