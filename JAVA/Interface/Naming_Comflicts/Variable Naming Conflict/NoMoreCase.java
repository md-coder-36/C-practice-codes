interface Interface1 {
    String s = "It is interface1";
}

interface Interface2 {
    String s = "It is interface2";
}

public class NoMoreCase implements Interface1, Interface2 {
    public static void main(String[] args) {

        // NoMoreCase o = new NoMoreCase();
        // System.out.println(o.s);

        // if we print the data in variable with out
        // specifying reference of interface it throws error
        // System.out.println(s); error
        // s is by default final or static var.

        System.out.println(Interface1.s); // call by referance of interface name.
        System.out.println(Interface2.s);
    }
}

// if we don’t use of reference of interface name while accessing strings s it
// throws an ambiguous reference error. So using the Interface name as a
// reference prevents ambiguity while accessing.
