class Outter {
    void outtermethod() {
        System.out.println("you your inside in Outter...");

        class Inner { // Can class inside Outter class method.
            void innermethod() {
                System.out.println("you your inside in Inner...");
            }
        }
        Inner i = new Inner(); // call outtermethod with automatic call innermethod.
        i.innermethod(); // by creating Inner class object inside Outter class.
    }
}

public class InnerClassInsideOuttermethod {
    public static void main(String[] args) {
        Outter o = new Outter();
        o.outtermethod();

    }
}
