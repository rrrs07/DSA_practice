#include<bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int num){
 int result = 0;
    if(num == 1) // there will be no proper divisor 
      return result;
    // find all divisors which divides 'num'
    for (int i=2; i<=sqrt(num); i++)
    {
        // if 'i' is divisor of 'num'
        if (num%i==0)
        {
            // if both divisors are same then add
            // it only once else add both
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
        }
    }
 
    // Add 1 to the result as 1 is also a divisor
    return (result + 1);


    //another method
//     #include<bits/stdc++.h>
// using namespace std;

// int sumOf(int n){
//    int sum = 0;
//    for(int i = 1; i<=n;i++){
//       sum=sum+i*(n/i);
//    }
//    return (sum + 1);
// }

}

int main() {
    int num = 36;
    cout<<sumOfAllDivisors(num)<<endl;

    return 0;
}