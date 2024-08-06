#include<iostream>
#include<string>
using namespace std;

int main() {
    char ch[100];
    cin.getline(ch, 100);
    
    // for print every character with index
    // for(int i=0; i<100; i++)
    //     cout <<'at index'<<i<<" "<< ch[i] << endl;
    
    cout <<"printing the value:"<< ch << endl;
}