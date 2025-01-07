
public class VarLenthArgsMethod {

    // public static void Varargs(String... str) // variable length arguments
    public void Varargs(String... str) // variable length arguments
    {
        System.out.println("Number of arguments are: " + str.length);

        System.out.println("The argument values are: ");
        for (String s : str)
            System.out.println(s);
    }

    public static void main(String args[]) {

        // Varargs(); -> when method is static

        VarLenthArgsMethod v = new VarLenthArgsMethod();
        v.Varargs("Apple", "Mango", "Pear");
        v.Varargs();
        v.Varargs("Magic");
    }

}
