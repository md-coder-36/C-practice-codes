class Base {

    int basevalue = 1;
}

class Derived1 extends Base { // Acquire base members

    int derived1value = 2;

    void print() {
        System.out.println("derived1value : " + derived1value + "\n\n\n");
        // System.out.println("derived2value : \n" + derived2value);
        // System.out.println("derived3value : \n" + derived3value);
    }
}

class Derived2 extends Derived1 { // Acquire base+Derived1 members

    int derived2value = 3;

    void print() {
        System.out.println("derived1value : " + derived1value + "\n");
        System.out.println("derived2value : " + derived2value + "\n\n\n");
        // System.out.println("derived3value : \n" + derived3value);
    }
}

class Derived3 extends Derived2 { // Acquire base+Derived1+Derived2 members

    int derived3value = 2;

    void print() {
        System.out.println("derived1value : " + derived1value + "\n");
        System.out.println("derived2value : " + derived2value + "\n");
        System.out.println("derived3value : " + derived3value + "\n");
    }
}

class Multilevel {

    public static void main(String[] args) {

        Derived1 d1 = new Derived1();
        d1.print();

        Derived2 d2 = new Derived2();
        d2.print();

        Derived3 d3 = new Derived3();
        d3.print();
    }
}
