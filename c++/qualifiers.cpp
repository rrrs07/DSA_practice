#include<iostream>
using namespace std;

int lifeUp(){
    static int life = 3;
    return life = life + 1;
}

int main(){
    int life = 3;
    cout<<"starting life: "<<life<<endl;

    life = lifeUp();
    cout<<"updated life: "<<life<<endl;

    life = lifeUp();
    cout<<"updated life: "<<life<<endl;


}