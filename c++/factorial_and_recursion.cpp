#include<iostream>
using namespace std;

int factorial(int n);

int main(){
    
    // factorial : 5! = 5*4*3*2*1 = 120
    // factorial : 5! = 1*2*3*4*5 = 120
    int n;

    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}

int factorial(int n){
    if(n >1){
        return n * factorial(n-1);
    }
    else{
        return 1;
    }
    
}