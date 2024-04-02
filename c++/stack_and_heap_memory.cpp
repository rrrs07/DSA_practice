//stack is fastest and default...it is predefined

//heap --- it is also predefined but can grow


#include<iostream>

struct User {
    const int id;
    int age;
 

    // some errors to deal
    User() : id(3454) , age(22) {};
};

int main(){
    using namespace std;

    //stack memory
    int score = 100;
    User mike;

    //heap
    int* heap_score = new int;
    *heap_score = 200;

    User* nike = new User();

    delete heap_score;
    delete nike;

    return 0;

}