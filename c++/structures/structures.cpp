#include<iostream>
using namespace std;

struct User{
    //we cannot make changes in uId by overwriting but we can do it with name and email because in uId we are making it const int but in others we just making its pointer to be const and not its value....therefor they can be overwritten
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main()
{
   User mickey = {001,"mickey","mickey@gmail.com",2};
   cout<<mickey.email<<endl;

   User * m = &mickey;

   //overwrite it by accessing it
    mickey.course_count = 4;
    cout<<mickey.course_count<<endl;

    m->course_count = 12;
    cout<<mickey.course_count<<endl;

    return 0;
} 
