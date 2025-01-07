#include <iostream>
using namespace std;

class Student // This is a virtual class.Hybrid  inheritance solution
{
protected:
    int roll_no;

public:
    void set_number(int r)
    {
        roll_no = r;
    }
    void print_number()
    {
        cout << "Student Roll number : " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    int maths, science, physics;

public:
    void set_marks(int m, int s, int P)
    {
        maths = m;
        science = s;
        physics = P;
    }
    void print_marks()
    {
        print_number();
        cout << "\nYou have get marks in maths :" << maths << endl;
        cout << "You have get marks in science :" << science << endl;
        cout << "You have get marks in physics :" << physics << endl;
    }
};
class Sports : public virtual Student
{
protected:
    int score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void print_score()
    {
        cout << "\nStudent have achive PT score : " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    int total;

public:
    void print_data()
    {
        float totalmarks = maths + science + physics;
        total = maths + science + physics + score * 10;
        float percentage = ((totalmarks + (score * 10)) / 4);
        print_marks();
        print_score();
        cout << "\nYou yave get total Score : " << total << endl;
        cout << "\nYou yave get total percentage : " << percentage << "%" << endl;
    }
};

int main()
{
    int r, m, s, p, s1;
    cout << "Enter your Roll number : " << endl;
    cin >> r;
    cout << "Enter a maths subject marks : " << endl;
    cin >> m;
    cout << "Enter a science subject marks : " << endl;
    cin >> s;
    cout << "Enter a physics subject marks : " << endl;
    cin >> p;
    cout << "Enter a your PT score : " << endl;
    cin >> s1;
    Result meet;
    meet.set_number(r);
    meet.set_marks(m, s, p);
    meet.set_score(s1);
    meet.print_data();

    return 0;
}

/*Virtual class

            ... A ...
            .       .
            B       C
            .       .
            ... D ...

->In this type inherits from A->B , A->C and B,C->D.
->defined by writing a keyword “virtual” in the derived classes,
  allowing only one copy of data to be copied to Class B or Class C.
->The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances.

*/