#include <iostream>
using namespace std;

// int factorial(int n){
    
//     // base case
//     if(n==1) 
//     return 1;
//     if(n==0) 
//     return 0;

//     int recursionAns = factorial(n-1);
    
//     int finalAns = n + recursionAns;
//     return finalAns;
    
// }


//print n to 1 in reverse order
// int print(int n){
//     if(n==0) return 0;
//     cout<<n<<" ";
//     print(n-1);
//     return 0;
// }


// print pow of n
// int pow(int n){
//     //base case
//     if(n==0) return 1;

//     int ans = 2 * pow(n-1);
//     return ans;
// }



//fibonacci series
int fib(int n){
    //base case
    if(n==0) return 0;
    if(n==1) return 1;

    int ans = fib(n-1) + fib(n-2);
    return ans;
}




int main() {
    
    cout<<fib(7)<<endl;

    return 0;
}