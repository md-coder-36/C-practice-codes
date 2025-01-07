/*
 WHAT IS LIST.

 ->Lists are sequence containers that allow non-contiguous memory allocation.
   As compared to the vector, the list has slow traversal,
   but once a position has been found, insertion and deletion are quick (constant time).

*so most use of travesal that use vectors .
*so most use of insertion,searching and deletion that use Lists .

*/

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{

    list<int> l1; // empty list of 0 length
    // list<int> l1(5);  // empty list size 5.
    l1.push_back(5);
    l1.push_back(7);
    l1.push_back(1);
    l1.push_back(9);
    l1.push_back(12);

    l1.sort(); // sorting a list by pre define function.
    display(l1);

    // l1.pop_back();  // last one element removed
    // display(l1);
    // l1.pop_front();  // first one element removed
    // display(l1);
    // l1.remove(7);   // remove any perticular element
    // display(l1);

    list<int> l2(3);                     // empty list of length 3
    list<int>::iterator it = l2.begin(); // make operation by pointer point to any list index.
    *it = 15;                            // indert direct point to first element.
    it++;
    *it = 30;
    it++;
    *it = 45;
    it++;

    display(l2);
    l1.merge(l2);
    display(l1);
    return 0;
}
