class InterfaceManager {

    public void outtermethod() {
        System.out.println("Inside outter class method.\n");
    }

    interface InnerInter {
        public void interfaceMethod();
    }

    // Implimantation for interface method :case 1
    class InnerClass implements InnerInter {
        public void interfaceMethod() {
            System.out.println("Implement Interface method by Innerclass");
        }
    }
}

// Implimantation for interface method :case 2
class OutterClass implements InterfaceManager.InnerInter {
    public void interfaceMethod() {
        System.out.println("Implement Interface method by outside Other class");
    }

}

public class InterfaceInsideClass {
    public static void main(String[] args) {
        InterfaceManager i = new InterfaceManager();
        i.outtermethod();

        InterfaceManager.InnerClass i1 = i.new InnerClass();
        i1.interfaceMethod();

        OutterClass i2 = new OutterClass();
        i2.interfaceMethod();
    }
}
