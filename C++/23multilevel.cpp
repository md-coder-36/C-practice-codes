#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number; // it's directly use by student class.

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The Roll number is :" << roll_number << endl;
}
class Exam : public Student // Exam is inherited to Student class.
{
protected:
    float maths; // it's directly use by Result class.
    float physics;
    float science;

public:
    void set_marks(float, float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2, float m3)
{
    maths = m1;
    physics = m2;
    science = m3;
}

void Exam ::get_marks()
{
    cout << "\nThe marks obtained in Maths are : " << maths << endl;
    cout << "The marks obtained in Physics are : " << physics << endl;
    cout << "The marks obtained in Science are : " << science << endl;
}
class Result : public Exam // Result is inherited to Exam class.
{
    float percentage; // private variable.

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics + science) / 3 << "%." << endl;
    }
};
int main()
{
    Result meet;
    meet.set_roll_number(36);
    meet.set_marks(94.0, 90.0, 97.0);
    meet.display_results();
    return 0;
}

/*

If we are inhariting B from A and C from B.so , A-->B-->C is Inheritance path.

*/
