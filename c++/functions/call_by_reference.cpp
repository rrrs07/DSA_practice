#include<iostream>
using namespace std;

//call by reference 

void lifeUp (int *life){
    ++(*life);
}

int main(){
    int life = 3;
    lifeUp(&life);
    cout<<life<<endl;

    return 0;
}


//changing the reference directly

// void lifeUp (int &life){
//     ++life;
// }

// int main(){
//     int life = 3;
//     lifeUp(life);
//     cout<<life<<endl;

//     return 0;
// }