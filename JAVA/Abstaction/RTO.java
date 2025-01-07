public abstract class RTO { // Min. one abtract method in class : Abstract class.

    int a = 0; // instance, final , static variable.
               // you can not create object RTO,so instance var. not usable.(no sense)

    public abstract void tostart(); // Unimplemented method : Abstract method

    public void tostop() {
        System.out.println("Stop by breaks... ");
    }
}

// Abstraction : Only Declaration no defination.(defination by child classes)
// **it contains abstract and non-abstract methods.**

// Abstract method : Abstract methods do not specify a body.

// abstract keyword : use with -> class and method.

// case 1:
// if there is single abstract method, you have to declare your class as
// abstract
// class.

// case 2:
// if the class abstract
// then there is no need to create single abstract method.

// **Twov must implement the inherited abstract method RTO.tostart() by ownchild
// class.**
// Twov is not abstract and does not override abstract method tostart() in RTO
