interface OutterInter {

    public void outter();

    interface InnerInter {

        public void Inner();
    }
}

class OuterInterImpt implements OutterInter {
    public void outter() {
        System.out.println("OutterInter method is implemented.");
    }

}

class InnerInterImpt implements OutterInter.InnerInter {
    public void Inner() {
        System.out.println("InnerInter method is implemented.");
    }
}

public class InterfaceInsideInterface {
    public static void main(String[] args) {

        OuterInterImpt i1 = new OuterInterImpt();
        i1.outter();

        InnerInterImpt i2 = new InnerInterImpt();
        i2.Inner();

    }
}
