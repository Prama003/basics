#include<iostream>
#include<string>
using namespace std;
class Book
{  
    public:
    string title;
    string author;
    int pages;
    Book(string atitle, string aauthor, int apages)
    {
        title=atitle;   // first the actual parameter then the constructor parameter while swapping
        author=aauthor;
        pages=apages;
    }
};
    int main()
    {
        Book book1("harry potter","Jk rowling",500);
        Book book2("starboy","weeknd",30);
        cout<<book2.author<<endl;
        return 0;
    }

