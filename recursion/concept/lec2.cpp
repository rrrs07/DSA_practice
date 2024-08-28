#include<iostream>
#include <limits.h>
#include <vector>
using namespace std;

// void printArray(int arr[], int size, int index){
//     if(index>= size) return;

//     cout<<arr[index]<<" ";

//     printArray(arr, size, index+1);


//     // to print it in reverse order just put the cout statement after the recursive call
// }


//(find the target in array)
// bool searchArray(int arr[], int size, int index, int target){
//     if(index>=size) return false;

//     if(arr[index] == target) return true;

//     return searchArray(arr, size, index+1, target);
// }
 
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int index = 0;
//     int target = 5;

//     // printArray(arr, size, index);

//     cout<<"target found or not: "<<searchArray(arr, size, index, target)<<endl;
// }



//(find minimum element in array)
// void findMin(int arr[], int size, int index, int &mini){
//     //base case
//     if(index>=size) return;

//     //processing
//     mini = min(mini, arr[index]);

//     //recursive call
//     findMin(arr, size, index+1, mini);
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int index = 0;

//     int mini = INT_MAX;
//     findMin(arr, size, index, mini);
//     cout<<"minimum element is: "<<mini<<endl;

//     return 0;
// }



//(solve even no of elements in array into vector)
// void solve(int arr[], int size, int index, vector<int> &v){
//     //base case
//     if(index>=size) return;

//     //processing
//     if(arr[index]%2 == 2) v.push_back(arr[index]);

//     //recursive call
//     solve(arr, size, index+1, v);
// }


// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     int index = 0;

//     vector<int> v;
//     solve(arr, size, index, v);
    
//     // print vector
//     for(int num: v){
//         cout<<num<<" ";
//     }

//     return 0;
// }



//(find max no. in array)
// void findMax(int arr[], int size, int index, int &maxi){
//     //base case
//     if(index>=size) return;

//     //processing
//     maxi = max(maxi, arr[index]);

//     //recursive call
//     findMax(arr, size, index+1, maxi);
// }

// int main (){
//     int arr[]={1,2,3,4,5};
//     int size = 5;
//     int index = 0;

//     int maxi = INT_MIN;
//     findMax(arr, size, index, maxi);
//     cout<< "max element is: " <<maxi<<endl;
//     return 0;
// }



// (to store digit of a given int )
// void printDigits(int num){
//     //base case
//     if(num == 0) return;

//     //processing
//     int digit = num%10; // now update it
//     num = num/10;

//     //recursive call
//     printDigits(num);

//     //print the digit
//     cout<<digit<<" ";
// }

// int main (){
//     int num = 4215;
//     printDigits(num);

// }   


//(to store the digits in vector from above code)
// void printDigits(int num, vector<int>& ans){
//     //base case
//     if(num == 0) return;

//     //processing
//     int digit = num%10; // now update it
//     num = num/10;

//     //recursive call
//     printDigits(num, ans);

//     //print the digit
//     ans.push_back(digit);
// }

// int main (){
//     int num = 4215;
//     vector<int> ans;
//     printDigits(num, ans);

//     for(int num:ans){
//         cout<<num<<" ";
//     }

// }   




int combineDigits(const std::vector<int>& digits, int index = 0, int currentNumber = 0) {
    int n = digits.size();

    // Base Case: If there's only one digit left, return that digit
    if (index == n) {
        return currentNumber;
    }
    
    // Recursive Case:
    // Multiply the current number by 10 and add the current digit
    currentNumber = currentNumber * 10 + digits[index];
    
    // Move to the next digit
    return combineDigits(digits, index + 1, currentNumber);
}


int main() {
    vector<int> digits = {1, 2, 3, 4};  // Example digits
    int result = combineDigits(digits);
    cout << "The combined number is: " << result << std::endl;  // Output: 1234
    return 0;
}
