
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
    }
    
    //parameterised constructor
    Hero (int health){
        cout<<"this "<<this<<endl;
        this->health = health;
    }
    
    void print(){
        cout<<level<<endl;
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
    
    
    
    //static allocation
    Hero ramesh(5);
    cout<<"address of ramesh "<<&ramesh<<endl;
    // Hero a;
    // a.setHealth(70);
    // a.setLevel('e');
    // cout<<"level is "<< a.level<<endl;
    // cout<<"health is "<< a.getHealth()<<endl;
    
    //dynamically
    Hero *h = new Hero();
    // Hero *b = new Hero; 
    // b->setLevel('A');
    // b->setHealth(46);
    // cout<<"level is "<< (*b).level<<endl;
    // cout<<"health is "<< (*b).getHealth()<<endl;
    
    // cout<<"level is "<< b->level<<endl;
    // cout<<"health is "<< b->getHealth()<<endl;
    
    
   //creation of object
//   Hero ramesh;
//   cout<<"ramesh health is " << ramesh.getHealth()<< endl;
   
//   //use setter 
//   ramesh.setHealth(60);
//   ramesh.level = 'm';
   
//   cout<<"health is: " <<ramesh.getHealth()<<endl;
//   cout<<"level is: " <<ramesh.level<<endl;

    return 0;
}