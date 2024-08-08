#include<iostream>  
#include<string>
using namespace std;

int main(){

    


    // string name;  // creation

    // getline(cin, name);  // input

    //cout <<"Printing the name: "<< name << endl;  // output
    //cout <<"Printing the name: "<< name[1] << endl;  // output

    // int i = 0;
    // while(name[i] != '\0') {
    //     cout <<"index: "<<i <<"character: " << name[i] << endl;
    //     i++;
    // }
    // cout<<"printing the index of 6: "<< name[6] << endl;
    // int value = (int)name[6];

    // cout<<" value: " << value <<endl;



    /*size, empty, push_back, pop_back, append, at, substr, compare, find, insert, erase, replace, swap, c_str, getline*/ 
    // string name;
    // cin>>name;
    // cout<< "Length: " <<name.length() <<endl;
    // cout<< "empty or not : " <<name.empty() <<endl;
    // cout<< "index: " <<name.at(0) <<endl;


    // string str1 = "Hello ";
    // string str2 = "World";

    // str1.append(str2);
    // cout<< "appending: " <<str1 <<endl;


    string str1 = "hello bro";
    string str2 = "kaisa hai";
    if(str1.find(str2) == string::npos){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }
}