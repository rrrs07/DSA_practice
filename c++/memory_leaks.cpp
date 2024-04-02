#include<iostream>
using namespace std;

int main()
{
    int * myp;

    try{
        myp = new int [100];
        cout <<"memory space allocated"<<endl;
    } catch(...){
        cout<<"failed in allocating memory"<<endl;
    }
    

    delete [] myp;

    return 0;
} 
