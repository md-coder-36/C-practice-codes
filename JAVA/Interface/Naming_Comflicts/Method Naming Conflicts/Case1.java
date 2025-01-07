// create to show() in both Interfaces.

interface Interface1 {

    public void show();
}

interface Interface2 {

    public void show();
}

class Imp implements Interface1, Interface2 {

    // implement the methods of interface
    public void show() {
        System.out.println("This method is in both Interface1 and Interface2");
    }
}

public class Case1 {
    public static void main(String[] args) {
        // create object
        Imp obj = new Imp();
        // using object call the implemented method
        obj.show(); // can't throw exception/error.on this which interfacwe method.
    }

}

// we can’t confirm which show a method of 2 interfaces gets executed. No error
// will be thrown.
