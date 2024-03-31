#include<iostream>
using namespace std;

int main(){
    char my_string[] = "rrrs" ;
    char my_name[] ={'r','r','r','s',0,7};
    cout<<my_name<<endl;

    cout<<"take a break\n";

    for (int i = 0; my_name[i] != 0 ; i++)
    {
        cout<<"character is: " << my_name[i]<<endl;
    }

     cout<<"take a break 2\n";

    for (char * cp = my_name ; *cp != 0 ; cp++)
    {
        cout<<"character is: " <<*cp<<endl;
    }
    

    return 0;
}