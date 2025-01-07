interface Interface1 {

    public void show();
}

interface Interface2 {

    public String show();
}

class Imp1 implements Interface1 { // multiple interfaces not implemented.
    // try to implement both interfaces in the same class then, it will throw an
    // error

    public void show() {
        System.out.println("Implementation of interface1 method.");
    }

    // public String show() // multiple interfaces can't implement.
    // { return "Meet"; }
}

class Imp2 implements Interface2 {

    public String show() {

        return "Implementation of interface2 method.";
    }
}

public class Case3 {

    public static void main(String[] args) {

        Imp1 i1 = new Imp1();
        Imp2 i2 = new Imp2();

        i1.show();
        System.out.println(i2.show());
    }
}

// we can’t implement both interfaces in the same class because an error can be
// thrown due to ambiguity between them. So we need to create a different class
// to implement Interface2