#include<iostream>
using namespace std;

int getTwo(){
    return 2;
}

void interesting(){
    puts("I am interesting");
}

int main()
{
    int whatIgot = getTwo();

    void (*pointsToInteresting)() = interesting;

    cout<<whatIgot<<endl;

    pointsToInteresting();

    return 0;
}