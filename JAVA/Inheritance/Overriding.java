class A {

    // public final void m1() -> make mathod as final so can't modify by child
    // class.
    public void m1() {

        // System.out.println("send to other via own child class . ");
        System.out.println("Say m1 called..");
    }
}

class B extends A {

    public void m1() {
        System.out.println("Say m1 not called.."); // change some in base class method.
    }
}

public class Overriding {

    public static void main(String[] args) {

        B b = new B();
        b.m1();

        // A a = new B(); ->Object of child referance to child.
        // a.m1(); -> call child overrided method.
    }
}

// Overriding : same name mathod in base and derived classes. [m1()]