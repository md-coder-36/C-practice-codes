
public class ShowExceptionInStack {

    int a = 10;
    int b = 0;
    // int b = 5;
    int c;

    public static void main(String[] args) {

        ShowExceptionInStack e = new ShowExceptionInStack();
        e.m1();
    }

    public void m1() {
        System.out.println("Method m1 is called...");
        m2();
        System.out.println("Method m1 is end...");
    }

    public void m2() {
        System.out.println("Method m2 is called...");
        m3();
        System.out.println("Method m2 is end...");
    }

    public void m3() {
        System.out.println("Method m3 is called...");
        m4();
        System.out.println("Method m3 is end...");
    }

    // // --> solve m4() Exception.

    // public void m3() {
    // System.out.println("Method m3 is called...");
    // try {

    // m4();

    // } catch (Exception e) { // We can use Exception class methods.
    // System.out.println("Exception In m4(), So removed From Stack , By TRY");
    // // m5(); -> in m4() give exception so direct call m5().
    // }
    // System.out.println("Method m3 is end...");
    // }

    public void m4() {
        System.out.println("Method m4 is called...");
        c = a / b;
        System.out.println("Exception in method m4..." + c);
        m5();
        System.out.println("Method m4 is end...");
    }

    public void m5() {
        System.out.println("Method m5 is called...\n");
        System.out.println("Method POP of the Stack...\n");
        System.out.println("Method m5 is end...");
    }

}

// In methods m4() Show exception :

// Exception in thread "main" java.lang.ArithmeticException:Can't divided by
// zero
// at ShowExceptionInStack.m4(ShowExceptionInStack.java:34)
// at ShowExceptionInStack.m3(ShowExceptionInStack.java:28)
// at ShowExceptionInStack.m2(ShowExceptionInStack.java:22)
// at ShowExceptionInStack.m1(ShowExceptionInStack.java:16)
// at ShowExceptionInStack.main(ShowExceptionInStack.java:11)

// In method m4() gives exceptions so , and after all methods are suspended in
// Stack.