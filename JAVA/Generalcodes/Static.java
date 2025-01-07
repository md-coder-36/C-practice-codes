class Static {
    int a = 36; // instance variable,not execute without obj./referance.

    static int b = 37; // static instance variable

    public static void print() {
        System.out.println("static method load/called,without any class object.");
    }

    final int c = 38;

    public static void main(String[] args) {
        // System.out.println(a); non-static var a can't be referenced from a static
        // context.

        System.out.println(b); // without obj printed,load with class.
        System.out.println(Static.b); // class_name.variable can write it??
                                      // yes, var. is static to reference to direct class.

        Static.print(); // class_name.method_name can write it??
        // yes, method is static to reference to direct class.
        // It is load , when class load class.

        // Static o1 = new Static();
        // o1.c = 40; // cannot assign a value to final variable c
        // System.out.println(o1.c);

    }

}

// Static keyword : use in ->
// variables : One variable for all Object.
// methods : Its' load first in memory when you load class.
// Inner classes.

// Final keyword : use in ->
// variables : can't modify the value at run time.
// methods : stop Overriding
// Classes :can't able to make Subclass.

// Instance var : a variable that is specific to a certain object.
// Instance : (pizza for everyone) = Diff values for diff. object
// not effect 1'st objrct var. value to 2nd objrct var. values.
// so this value is overwrite to 1st object assign varvalue.

// static : (one pizza for all member)
// Load Data/method in memory when load class.
// It is one time load in am menory without any referance/object.
// if it is change , it is change for averyone.
// mean var can state in memory as fixed value/0 is maintained.
// not give access for diff. diff. object gives own value.

// final : (pizza for principal) =one time fixed it then not modified.
// Once you finalize,then you can't modified it.

// abstract keyword : use with class and method.
