#include <iostream>
using namespace std;

// int binarySearch(int arr[], int s, int e, int key){
//     // base case
//     if(s>e){
//         return -1;
//     }
//     //processing
//     int mid = s + (e-s)/2;
//     if(arr[mid] == key){
//         return mid;
//     }

//     // rest recursion will do
//     if(arr[mid] < key){
//         // move right 
//         s = mid + 1;
//         return binarySearch(arr, s, e, key);
        
//     }
//     else{
//         //move left
//         e = mid - 1;
//         return binarySearch(arr, s, e, key);
        
//     }
// }


// int main (){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = 10;
//     int key = 5;
//     int s = 0;
//     int e = n-1;

//     int foundIndex = binarySearch(arr, s, e, key);
//     if(foundIndex != -1){
//         cout<<"Element found at: "<< foundIndex <<endl;
//     }
//     else{
//         cout<<"Element not found "<<endl;
//     }
//     return 0;
// }



// subsequences of a string
// void findSubSequence(string str, string output, int index){
//     //base case
//     if(index >= str.length()){
//         //ans jo ha, vo output string me build ho chuka hai
//         //print
//         cout<< "->"<<output<<endl;
//         return;
//     }

//     char ch = str[index];

//     // //exclude
//     // findSubSequence(str, output, index+1);

//     // //include
//     // output.push_back(ch);
//     // findSubSequence(str, output, index+1);

    
//     // another way
//     //include
//     output.push_back(ch);
//     findSubSequence(str, output, index+1);

//     //exclude
//     output.pop_back();
//     findSubSequence(str, output, index+1);
// }

// int main(){
//     string str = "abc";
//     string output = "";
//     int index = 0;
//     findSubSequence(str, output, index);
// }


//maximize the cut segment
// int maximizeTheCuts(int n, int x, int y, int z)
//     {
//         //Your code here
//         if(n == 0) return 0;
        
//         if(n < 0) return INT_MIN;
        
//         int option1 = 1 + maximizeTheCuts(n-x, x, y, z);
//         int option2 = 1 + maximizeTheCuts(n-y, x, y, z);
//         int option3 = 1 + maximizeTheCuts(n-z, x, y, z);
        
//         int finalAns = max(option1, max (option2, option3));
//         return finalAns;
//     }
