#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // There can not be multiple copies of same static variables for different objects.
                      // static variables can not be initialized, by default initialized with 0.
public:
    void setData(void)
    {
        cout << "Enter the Employee id : " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Employee number is : " << count << endl
             << "Employee ID is :" << id << endl;
    }

    static void getCount(void) // static method only executed once time.
    {
        // cout<<id; // throws an error , because only except static variables.
        cout << "\nThe value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
int Employee::count;

int main()
{
    Employee e1, e2, e3;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    e1.setData();
    e1.getData();
    Employee::getCount(); // static function called without any object.

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}
