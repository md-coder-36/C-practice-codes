class Outter {
    static int data = 30;

    static class Inner {
        void Innermethod() {

            System.out.println("Inside in Static Inner class...\nNon-static method... ");
            System.out.println("data is " + data);
        }

        static void staticInner() {

            System.out.println("Inside in Static Inner class...\nstatic method... ");
            System.out.println("data is " + data);
        }
    }
}

public class StaticNestedClass {

    public static void main(String args[]) {

        Outter.Inner obj = new Outter.Inner();
        obj.Innermethod();

        Outter.Inner.staticInner();
    }
}

// StaticNestedClass : static class is a class that is created inside a class
// It cannot access non-static data members and methods. It can be accessed by
// outer class name.