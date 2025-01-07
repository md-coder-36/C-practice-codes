abstract class Popcorn {
    public abstract void test();
}

class Cheeze extends Popcorn {
    public void test() {
        System.out.println("Cheeze Popcorn...");
    }
}

class Masala extends Popcorn {
    public void test() {
        System.out.println("Masala Popcorn...");
    }
}

public class Anonymous {
    public static void main(String[] args) {

        Cheeze cheeze = new Cheeze();
        Masala masala = new Masala();

        cheeze.test();
        masala.test();

        Popcorn sweet = new Popcorn() { // anonymous class ; single object is created(sweet)
            public void test() {
                System.out.println("Sweet Popcorn..."); // for use only sometimes.
            }
        };
        Cheeze sweet1 = new Cheeze() { // anonymous class
            public void test() {
                System.out.println("Sweet and Cheeze Popcorn..."); // for use only sometimes.
            }
        };

        sweet.test();
        sweet1.test();

        new Popcorn() { // anonymous class
            public void test() {
                System.out.println("Sweet Popcorn..."); // for use only one time.
            }
        }.test(); // Use wihout give parent class reference , only once use object.
    }
}

// Anonymous class : no have any name.use direct referance to our parent class.
// Ex : login button creation

// Explained : only a single object is created. An anonymous inner class can be
// useful when making an instance of an object with certain "extras" such as
// overloading methods of a class or interface, without having to actually
// subclass a class.
// used if you have to override a method of class or interface.
// Class (may be abstract or concrete).
// Interface
