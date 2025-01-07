class Outter {

    private int a = 10;

    class Inner {// Simple nested inner class

        public void show() {

            System.out.println("In a nested class method \nPrivate var of outter class : " + a);
        }
    }
}

class NestedInnerClass {

    public static void main(String[] args) {

        Outter.Inner in = new Outter().new Inner();
        in.show();
    }
}
