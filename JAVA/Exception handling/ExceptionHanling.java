
public class ExceptionHanling {

    public static void main(String[] args) {

        int a = 10;
        int b = 0;
        int c;
        // int c = a / b; // ArithmeticException: we can't divided by zero.

        // System.out.println("After Excelption , code is terminatade. is stop it.");

        // Solve this Exception : Is called Exception handling.

        System.out.println("Check Exception code by Try...");

        try { // Give block for write Exception checking code.
            c = a / b;
        } catch (ArithmeticException e) { // you can write more than one catches.
            System.out.println("We can't divide by zero"); // handle exception
        } catch (Exception e) {
            System.out.println("Other use of Catch operation.");
        }

        System.out.println("Write Exception code in try block ,After code is executed.");
    }
}

// Try : this check Exception , if Exception is present in block code then pass
// to the catch.
// catch : Discard exception code and return right own code.

// try : The "try" keyword is used to specify a block where we should place an
// exception code. It means we can't use try block alone. The try block must be
// followed by either catch or finally.

// catch :The "catch" block is used to handle the exception. It must be preceded
// by try block which means we can't use catch block alone. It can be followed
// by finally block later.

// finally : The "finally" block is used to execute the necessary code of the
// program. It is executed whether an exception is handled or not.

// throw : The "throw" keyword is used to throw an exception.

// throws : The "throws" keyword is used to declare exceptions. It specifies
// that there may occur an exception in the method. It doesn't throw an
// exception. It is always used with method signature.