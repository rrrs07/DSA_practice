#include<iostream>
using namespace std;

int main()

{
   
    char ch;
      
    cout << "enter the value :" << endl ;
    cin>>ch;
    
    if (ch>='a' && ch<='z') 
        cout << ch << "it is lowercase " ;
        
    
       else if (ch>= 'A' && ch<='Z') 
        cout << ch << "it is uppercase " ;
        

        else if (ch>= '0' && ch<='9') 
            cout << ch << "it is numeric " ;
        
        

}