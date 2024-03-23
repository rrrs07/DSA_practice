
#include <iostream>
using namespace std;
class Hero{
    //propertise
    private:
    int health;
    
    public:
    char level;
    
    //by default it is private
    //we only access it within the class
    
    Hero(){
        cout<<"Constructor called"<< endl;
    } //default constructor
    
    //parameterised constructor
    Hero (int health){
        //cout<<"this "<<this<<endl;
        this->health = health;
    }
    Hero (int health, char level){
        //cout<<"this "<<this<<endl;
        this->level = level;
        this->health = health;
    }
    
    //copy constructor
    Hero(Hero& temp){
        cout<<"copy cionstructor called"<<endl;
        this-> health = temp.health;
        this-> level= temp.level;
        
    }
    
    void print(){
        cout<<"level"<<this->level<<endl;
        cout<<"health"<<this->health<<endl;
    }
    //getter and setter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    
};

int main() {
    
    
   Hero S(70,'r');
   S.print();
   
   //copy constructor
   Hero R(S);
   R.print();

    return 0;
}