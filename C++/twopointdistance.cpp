#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b) // parameterized constructor
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
    friend Point Distance(Point o1, Point o2);
};

Point Distance(Point o1, Point o2, Point distance)
{
    distance.= o2.a - o1.b;
}

int main()
{

    int m1, m2, n1, n2;
    cout << "Give first point 2 digits : " << endl;
    cin >> m1 >> m2;
    cout << "Give Second point 2 digits : " << endl;
    cin >> n1 >> n2;

    Point p(m1, m2);
    p.displayPoint();

    Point q(n1, n2);
    q.displayPoint();
    return 0;
}
