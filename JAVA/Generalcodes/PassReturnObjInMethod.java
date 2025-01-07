class PassValue {

    int a = 10;

    void call(int b) {

        // this local variable a is subject to change in its value
        this.a = b + 10;
    }

}

class PassObjReference {

    int a;

    PassObjReference(int a) {
        this.a = a;
    }

    PassObjReference() {
    }

    public PassObjReference object(PassObjReference b) {

        PassObjReference b1 = new PassObjReference();
        b1.a = b.a + 10;

        System.out.println("After new value : " + b1.a);
        return b1;

    }
}

public class PassReturnObjInMethod {

    public static void main(String[] args) {

        // ***********************************************

        PassValue e = new PassValue();
        System.out.println("Before call-by-value : " + e.a);

        e.call(50);

        System.out.println("After call-by-value :" + e.a + "\n\n");

        // ***********************************************

        PassObjReference g1 = new PassObjReference(10);

        System.out.println("Before given value : " + g1.a);
        System.out.println(g1.object(g1));

    }

}
