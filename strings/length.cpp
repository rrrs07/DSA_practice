#include<iostream>
#include<string>
using namespace std;

int findLength(char ch[], int n) {
    int i=0;
    while(ch[i] != '\0') {
        i++;
    }

    // int length = 0;
    // int i;
    // for(i=0; i<n; i++) {
    //     if(ch[i] == '\0')
    //         break;
    //     else
    //     length++;
    
    // }
    
    return i;
}

int main() {
    char ch[100];
    cin.getline(ch, 100);

    int len = findLength(ch, 100);
    cout << "length of string is: " << len << endl;
}