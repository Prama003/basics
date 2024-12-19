#include<bits/stdc++.h>
#include<string>
using namespace std;
class Book  // first letter of the class in blocks
{   public:     // public is mandatory
    int pages;
    string title;
    string author;
};
 int main()
 {
    Book book1;
    book1.title="harry potter";
    book1.pages=500;
    book1.author="J K rowling";
    cout<<book1.title<<endl;
    return 0;
 }