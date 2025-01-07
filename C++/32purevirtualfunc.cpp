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
    virtual void display() = 0; //-> pure virtual function.
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
pure virtual function ?
->Pure virtual function is a function that doesn’t perform any operation and the function is declared by assigning the value 0 to it.
  Pure virtual functions are declared in abstract classes.

Abstract Base Class :
->Abstract base class is a class that has at least one pure virtual function in its body.
  The classes which are inheriting the base class must need to override the virtual function of the abstract class otherwise compiler
  will throw an error

*/
