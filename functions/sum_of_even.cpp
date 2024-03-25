#include<iostream>
using namespace std;


// int getSum(int n){
//     int sum=0;
//     for (int i = 2; i <= n; i++)
//     {
//         /* this is a heavy code */ 
//         if(i%2==0){
//         sum=sum+i;
       
//     }
//     }
//     return sum;
// }

int getSum(int n){
    int sum=0;
    for (int i = 2; i <= n; i=i+2)
    {
        /* this is a light code */ 
        
        sum = sum + i;
       
    }
    return sum;
}

int main()
{
    int n;
    cout<<"enter the value of n"<< endl;
    cin>>n;

    int sum= getSum(n);
    cout<<"sum of even no. upto " << n <<" is " << sum <<endl;
    return 0;
}