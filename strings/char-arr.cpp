#include<iostream>
#include<string>
using namespace std;

   // for print every character with index
// int main() {
//     char ch[100];
//     cin.getline(ch, 100);
    

//      for(int i=0; i<100; i++)
//         cout <<'at index'<<i<<" "<< ch[i] << endl;
    
//     cout <<"printing the value:"<< ch << endl;


// }




//find length of a string
// int findLength(char ch[], int n) {
//     int i=0;
//     while(ch[i] != '\0') {
//         i++;
//     }

//     // int length = 0;
//     // int i;
//     // for(i=0; i<n; i++) {
//     //     if(ch[i] == '\0')
//     //         break;
//     //     else
//     //     length++;
    
//     // }
    
//     return i;
// }

// int main() {
//     char ch[100];
//     cin.getline(ch, 100);

//     int len = findLength(ch, 100);
//     cout << "length of string is: " << len << endl;
// }




//reverse a string
// void reverseString(char ch[], int n) {
//     int i=0;
//     int j=n-1;
//     while(i<=j) {
//         swap(ch[i], ch[j]);
//         i++;
//         j--;
//     }
// }

// int findLength(char ch[], int n) {
//    int i=0;
//     while(ch[i] != '\0') {
//         i++;
//     }
//     return i;
// }

// int main() {
//     char ch[100];
//     cin.getline(ch, 100);

//     cout<<"before "<<ch<<endl;
//      int len = findLength(ch, 100);
//     reverseString(ch, len);
//     cout<<"after "<<ch<<endl;
// }




//convert lower to uppercase
// void ConvertToUpperCase(char ch[], int n) {
//     for(int i=0; i<n; i++) {
//         if(ch[i] >= 'a' && ch[i] <= 'z') {
//             ch[i] = ch[i] - 32;
//         }
//     }
// }

// //convert  uppercase to lower case
// void ConvertToLowerCase(char ch[], int n){
//     for(int i= 0; i<n;i++){
//         if(ch[i] >= 'A'  && ch[i] <= 'Z'){
//             ch[i] = ch[i] + 32;
//         }
//     }
// }

// int main() {
//     char ch[100];
//     cin.getline(ch, 100);

//     cout<<"before "<<ch<<endl;
     
//     ConvertToUpperCase(ch, 100);
//     cout<<"after "<<ch<<endl;
// }




// convert space between words to @
// void replaceChar(char ch[], int n){
//     for(int i=0; i<n; i++){
//         if(ch[i] == ' '){
//             ch[i] = '@';
//         }
//     }
// }

// int main() {
//     char ch[100];
//     cin.getline(ch, 100);

//     cout<<"before "<<ch<<endl;
     
//     replaceChar(ch, 100);
//     cout<<"after "<<ch<<endl;
// }




/* check palindrome  */
bool isPalindrome(char ch[], int n) {
    int i = 0;
    int j = n - 1;
    while (i <= j) {
        if (ch[i] != ch[j]) {
            cout << "Not a palindrome" << endl;
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    cout << "Palindrome" << endl;
    return true;
}

int main() {
    char ch[100];
    cin.getline(ch, 100);
     
    isPalindrome(ch, 100);
   
}