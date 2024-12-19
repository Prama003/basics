#include<iostream>
#include<string>
using namespace std;
class Chef{
    public:
    void makeschicken(){
    cout<<" they can make chicken"<<endl;
    }
    void makesalad(){
        cout<<"they can make salad"<<endl;
    }
};
class Italianchef : public Chef
{
    public:
    void makeschicken()
    {
        cout<<" they can make chicken"<<endl;
    }
    void makespasta()
    {
        cout<<"they can make pasta"<<endl;
    }
};
int main()
{
    Chef chef;
    chef.makeschicken();

    Italianchef italianchef;
    italianchef.makeschicken(); 
    italianchef.makespasta();   
    italianchef.makesalad();   

    return 0;
}
    
    
    