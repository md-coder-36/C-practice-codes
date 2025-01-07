// create to show() but pass diffrent args.

interface Interface1 {

    public void show();
}

interface Interface2 {

    public void show(String s);
}

class Imp implements Interface1, Interface2 {

    public void show(String s) {
        System.out.println(s);
    }

    public void show() {
        System.out.println("Interface2 show() is implemented");
    }

}

public class Case2 {
    public static void main(String[] args) {

        // create object
        Imp obj = new Imp();
        // calling methods
        obj.show();
        obj.show("Software Engineer");
    }

}

// the execution of these methods can be differentiated based on the signature,
// and return type is ignored in this case.