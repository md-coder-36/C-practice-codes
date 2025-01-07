// in multiple inheritance..

// more than one base classes , any same name function existing in all bass classes.
// that time it's problem generated.
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    { // same name but diffrent classes use by derived classes.
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet() // same name but diffrent classes use by derived classes.
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet(); // solve compiler confused problem , say which function you have called.
    }
};
int main()
{
    // Ambibuity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet(); // call by own object, so this will be executed.
    base2obj.greet(); // call by own object, so this will be executed.
    Derived d;
    d.greet(); // you don't write  Base2 ::greet(); line, compiler has confused.It called....

    return 0;
}
// In base2 class not implemented greed();, and make derived class of base1.
//  that time make base2 object , call greet() method in base1(perent) class.
// In base2 class implemented greed();, and make derived class of base1.
//  that time make base2 object , call greet() method in base2(own) class.

// own methos are exist so class call first own methods.
