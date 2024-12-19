#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    string dept;
    double gpa;
    Student(string aname, string adept, double agpa)
    {
        name=aname;
        dept=adept;
        gpa=agpa;
    }
    bool hons()
    {
        if(gpa>=5)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Student student1("sam","ece",4.5);
    Student student2("tom","cse",9);
    cout<<student1.hons()<<endl;
    return 0;
}