#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout <<"enter the first number"<<endl;
    cin >>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    if (b!=0)
    {
        cout<<a/b<<endl;
    }
    else
    {
        cout<<"division by zero not allowed"<<endl;
    }
    return 0;
}