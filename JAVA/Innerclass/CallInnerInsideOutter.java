class Outter {

    void outtermethod() {
        System.out.println("You your inside in Outter class...");

        Inner i = new Inner(); // call ottermethod with automatic call innermethod.
        i.innermethod(); // by creating Inner class object inside Outter class.
    }

    class Inner {
        void innermethod() {
            System.out.println("You your inside in Inner class...");
        }
    }
}

public class CallInnerInsideOutter {

    public static void main(String[] args) {

        Outter o = new Outter();
        o.outtermethod();
    }
}
