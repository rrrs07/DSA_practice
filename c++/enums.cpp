#include<iostream>
using namespace std;

//uint8_t is used to save memory
enum MsOffice: uint8_t {
    //AUTO INCREMENT ON THE BASIS OF ITS PREVIOUS ONE'S VALUE
    BOLD,
    ITALICS,
    UNDERLINE,
    COSSED
};

int main(){
    int myAttributes = BOLD;

    cout<<myAttributes <<endl;

    return 0;
}