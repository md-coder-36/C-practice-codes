#include <iostream>
using namespace std;

int count = 0;

class number
{
public:
    number()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }
    // Destructor never takes an argument nor does it return any value.
    ~number()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function." << endl;
    cout << "Creating first object n1." << endl;
    number n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        number n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}

/*
->Destructor is an instance member function which is invoked
  automatically whenever an object is going to be destroyed.
->a destructor is the last function that is going to be called
  before an object is destroyed.
->Destructor destroys the class objects created by constructor.
->It is not possible to define more than one destructor.
->The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
->Destructor neither requires any argument nor returns any value.
->It is automatically called when object goes out of scope.
->Destructor release memory space occupied by the objects created by constructor.
->In destructor, objects are destroyed in the reverse of an object creation.
->The programmer cannot access the address of destructor.
*/