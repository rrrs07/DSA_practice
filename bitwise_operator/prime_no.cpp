#include<iostream>
using namespace std;
int main(){
    
    //prime or not

int n;
cout<<"enter the value of n" <<endl;
cin>>n;

bool isPrime=1;

for(int i=2; i<n; i++)
{
    if(n%2== 0)
    {
        // cout<<"not a prime number";

        isPrime = 0;
        break;
    }

    if(isPrime==0)
    {
        cout<<"not a prime number";
    }

    else{
        cout<<"is prime number";
    }



   
}
}