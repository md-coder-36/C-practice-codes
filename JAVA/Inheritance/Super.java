class SuperClass {
    String supername;

    public SuperClass() {
        System.out.println("Inside SuperClass constructor\n");
    }

    // public SuperClass(String name) {
    // System.out.println("name = " + name);
    // }
    public void getSuper() {
        System.out.println("SuperClass method called\n");
        System.out.println("supername : " + supername);
    }
}

class SubClass extends SuperClass {
    String name = "Meet";

    public SubClass() {
        super(); // call a default constructor of superclass , without any superclass object.
        super.supername = "Value by SubClass";
        super.getSuper();

        System.out.println("Inside SubClass Constructor\n");

        // super(); -> error: call to super must be first statement in constructor
    }
}

public class Super {
    public static void main(String[] args) {

        SubClass s = new SubClass();
    }

}
// THIS keyword -> This is refer in same class(Inside class).

// SUPER keyword -> this refer to the super/base/parent class(Outside class).
// call a default constructor of superclass,without any superclass object.
// call to super must be first statement in SubClass constructor.
// super not able to invoke private method/constructor/var of superclass.
// It is a referace variable.
// super() -> call/invoke parent constructor.
// super.parentvar_name -> call/invoke/assign parent variable.
// super.parentmethod_name -> call/invoke parent method.

// Why use SUPER keyword ?
// In Inheritance overriding(same name method/constructor in child&parent) we
// need to call first parent method/constructor.that time use it.