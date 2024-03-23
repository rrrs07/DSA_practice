/*Encapsulation---Information hiding/data hiding */

/*advantages

* data hide---security increases
* we can make class--"read only"
* code reusability
* better for unit testing
*/

#include<iostream>
using namespace std;

class Student{
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }

};

int main(){

    Student first;
    cout<<"Sab sahi chalra hai"<<endl;

    return 0;
}