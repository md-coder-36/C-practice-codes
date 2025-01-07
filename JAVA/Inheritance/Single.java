class Base {

    int value1 = 10;

    public void print() {
        System.out.println("base class value : " + value1);
    }
}

class Derived extends Base { // Inherited by base class

    int value2 = 20;

    public void print() {
        System.out.println("Base class value : " + value1);
        System.out.println("Derived class value : " + value2); // base class value is inherited from derived class.
        System.out.println("Sum of both value : " + (value1 + value2)); // use base class value.

    }
}

public class Single {
    public static void main(String[] args) {

        Derived d = new Derived();
        d.print();
    }
}

// base class -> papa
// Derived class -> Beta
// extends -> say son of papa(father), It has acquire property of papa.

// What is inheritance ??
// a concept that acquires the properties from base class to Derived classes.
// one object acquires all the properties and behaviors of a parent object.
// You can use the same fields and methods already defined in the previous
// class.
// Inheritance represents the IS-A relationship which is also known as a
// parent-child relationship.

// 1. single inheritance
// 2. Multiple inheritance
// 3. Hirchical inheritance
// 4. Hebrid inheritance

// 5. Multiple inheritance : not support in java, because it has fase ambiguty
// problems.