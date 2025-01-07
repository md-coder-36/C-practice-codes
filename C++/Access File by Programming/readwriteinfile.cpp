#include <iostream>
#include <fstream> // file stream header file in class form.
/*
#include<fstream> this file some impo. derived class :
fstreambase  -> it is base class.
ofstream --> derived from fstreambase , Opening files using constructor and writing it
ifstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily,2 ways to open a file:
Using the constructor
Using the member function open() of the class
*/

using namespace std;

int main()
{
    // 1. Opening files using constructor .

    string st1 = "Hello , please add this taxt in text file.";
    // WRITING in to a text.txt
    ofstream out("text.txt"); // Write operation,out is object of ofstream class.
    out << st1;               // Write a st1 contant in out object pointed file.
    cout << "Write contant : " << st1;
    out.close(); // close/free/exit the file.

    string st2;
    // READ a text.txt file.
    ifstream in("text.txt"); // Read operation
    getline(in, st2);        // Read full line text.not use so give only first word.
    in >> st2;               // Store file contant in str2,
                             // And Read a st2 contant in in object pointed file.
    cout << "\nRead contant : " << st2;
    in.close();

    // 2. Opening files using class .

    // declaring an object of ofstream.
    ofstream fout;

    // connecting the object out to the text file using the member function open()
    fout.open("text.txt");

    // writing to the file
    fout << "\nNew text add, this operate by\n";
    fout << "using class.";
    // closing the file connection
    fout.close();

    // declaring an object of the type ifstream
    ifstream fin;
    // declaring string variable st
    string st;
    // opening the text file into in
    fin.open("text.txt");

    // giving output the string lines by storing in st until the file reaches the end of it
    while (fin.eof() == 0) // exit of file at last line
    {
        // using getline to fill the whole line in st
        getline(fin, st); // read full line.
        cout << st << endl;
    }
    fin.close();
    return 0;
}
