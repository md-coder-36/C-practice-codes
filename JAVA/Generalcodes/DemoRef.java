class Base {
    void Msg1() {
        System.out.print("Hello");
    }
}

class Dirived extends Base {
    public void Msg1() {
        System.out.print("Hi");
    }
}

class Dirived2 extends Base {
    public void Msg1() {
        System.out.print("Byeee");
    }
}

class DemoRef {
    public static void main(String args[]) {
        // Base ref;
        Dirived obj = new Dirived();
        // ref = obj;
        obj.Msg1();
    }
}