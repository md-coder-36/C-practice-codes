/*Constructor : 1. is like function.
                2. It's name same as class name.
                3. Don't have return statement.
                4. Always public.
                5. initialization of an object

                -> Whenever you can create an object of class then constructor is called.
                */

class Employee {

    private int id; // globle variable in class Emolyee/var. scope.
    private String name;
    private int salary;

    public Employee() { // default constructor
        // System.out.println("Default Constructor is called....");
    }

    public Employee(int i, String n, int s) { // parameterized constructor.
        this.id = i; // i is local variable.scope only inside this method
        this.name = n;
        this.salary = s;
    }

    public void display() {
        System.out.println("Employee Id : " + id);
        System.out.println("Employee name : " + name);
        System.out.println("Employee salary : " + salary);
    }

}

class constructor {

    public static void main(String[] args) {

        // Employee e1; // It makes only referance variable to refer to the class.
        // new Employee(); // we can create an object in memory, but not locate any
        // variable.It able to call constructor.

        // call member without referance.
        // new Employee().id = 0001;

        Employee e1 = new Employee(0001, "Rajesh", 20000);
        Employee e2 = new Employee();
        e1.display();

    }
}
