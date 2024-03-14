#include<iostream>

int main()

{
    int a;
    std::cout << "enter the value of a" << std::endl ;
    std::cin>>a;
    if (a>0) {
        std::cout << "a is greater" ;
        }
    else{
        if (a<0) {
        std::cout << "a is negative" ;
        }

        else{
            std::cout << "a is 0" ;
        }
    }    

} 
