#include<iostream>
using namespace std;

 

void lifeUp (int *life){
    ++(*life);
}

//creates your own datatypes
template<typename T>

T addme (T a , T b){
    return a + b;
}

int main(){
    int life = 3;
    lifeUp(&life);
    cout<<life<<endl;

    int v1 = 4;
    int v2 = 8;
    float v3 = 5.3;
    float v4 = 9.1;

    cout<< addme(v3 , v4)<<endl;

    return 0;
}