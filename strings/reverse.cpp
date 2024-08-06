#include<iostream>
#include<string>
using namespace std;

void reverseString(char ch[], int n) {
    int i=0;
    int j=n-1;
    while(i<=j) {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int findLength(char ch[], int n) {
   int i=0;
    while(ch[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char ch[100];
    cin.getline(ch, 100);

    cout<<"before "<<ch<<endl;
     int len = findLength(ch, 100);
    reverseString(ch, len);
    cout<<"after "<<ch<<endl;
}


   