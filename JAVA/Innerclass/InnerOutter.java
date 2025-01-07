class Outter {
    void outtermethod() {
        System.out.println("you your inside in Outter...");
    }

    class Inner {
        void innermethod() {
            System.out.println("you your inside in Inner...");
        }
    }
}

public class InnerOutter {
    public static void main(String[] args) {

        Outter o = new Outter(); // need to create Outter class object for access
        // Inner class.
        o.outtermethod();

        Outter.Inner i = o.new Inner(); // Inner class object.
        i.innermethod();

        // other method to access direct to inner class.
        new Outter().new Inner().innermethod();
    }

}
