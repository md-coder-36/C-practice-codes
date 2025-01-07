#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() { cout << "In CWH class" << endl; }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) // call base constructor through derived class constructor.
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "\nThis is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars." << endl;
        cout << "Length of this video is: " << videoLength << " minutes." << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "\nThis is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars." << endl;
        cout << "No of words in this text tutorial is: " << words << " words." << endl;
    }
};
int main()
{

    // for Code With Harry Video
    CWHVideo djVideo("Django tutorial", 2.1, 20.12);

    // for Code With Harry Text
    CWHText djText("Django tutorial Text", 4, 100);

    CWH *tuts[2];       // make base class array pointer.
    tuts[0] = &djVideo; // store address of derived object.
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

/*
** virtual function ??
-> that function declare in base class , this required to make overwrite
   function in derived class.
-> A member function in the base class which is declared using virtual keyword is called virtual functions.
   They can be redefined in the derived class.

**Rules for virtual function :

1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in the base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/
