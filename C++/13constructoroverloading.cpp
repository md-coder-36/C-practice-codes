#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {          // same more than one constructor - constructor overloading.
        a = 0; // It is diffrentiat with pass different no of arguments.
        b = 0;
    }
    Complex(int x, int y) // constructor with difault argument.
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}

/* constructor with difault argument :
 - how many no of args given constuctor/normalfunction
   It takes this given args and other as default arguments.
 */
