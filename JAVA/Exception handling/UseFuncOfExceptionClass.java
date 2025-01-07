
public class UseFuncOfExceptionClass {

    public static void main(String[] args) {

        int a = 10;
        int b = 0;
        int c = 0;

        System.out.println("Check Exception code by Try...");

        try {
            c = a / b;

        } catch (Exception e) { // e Object of Exception.
            System.out.println("Other use of Catch operation.\n");

            // Functions of Exception class.
            System.out.println("getMessage() : " + e.getMessage() + "\n");
            System.out.println("toString() : " + e.toString() + "\n");

            e.printStackTrace();
        } finally { // Some reason if/catch not executed , but is finally executed.
            System.out.println("The value of c: " + c);
        }

        System.out.println("Write Exception code in try block and catch has solve it,then After code is executed.");
    }
}
