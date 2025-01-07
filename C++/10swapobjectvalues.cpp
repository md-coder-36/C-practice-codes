// Using two different friend classes

#include <iostream>
using namespace std;

class c2; // forward declaration.

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &); // pass referance to friend class object.

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &); // pass referance to friend class object.

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y) // swapping of two object's data.So change/swap two object values.
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(40);
    cout << "The value of oc1 before : " << 40 << endl;
    oc2.indata(50);
    cout << "The value of oc2 before : " << 50 << endl
         << endl;
    exchange(oc1, oc2);

    cout << "The value of oc1 after exchanging becomes: ";
    oc1.display();
    cout << "The value of oc2 after exchanging becomes: ";
    oc2.display();

    return 0;
}
