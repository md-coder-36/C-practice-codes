class Animal {
    String nameA = "pets";

    public void type() {
        System.out.println("Say type of animal : " + nameA);
    }
}

class Dog extends Animal {
    String nameD = "Dog";

    public void name() {
        System.out.println("Say name of animal : " + nameD);
    }
}

public class referancetoparent {
    public static void main(String[] args) {

        Animal animal = new Animal();
        System.out.println(animal.getClass()); // ClassName@hex

        Dog dog = new Dog();
        System.out.println(dog.getClass()); // ClassName@hex

        Animal animal1 = new Dog(); // object of child class,by using parent's referance var.
                                    // similar float f = i; | i = 1;
        System.out.println(animal1.getClass()); // ClassName@hex | child class object generated.

        animal1.type(); // can access parent method only.
        // animal1.name(); -> can't access child method.

        System.out.println("\nup casting ..\n");
        Dog dog1 = (Dog) animal1; // convert into child object : type casting.
        dog1.type();
        dog1.name();

        System.out.println("\ndown casting ..not possible\n");
        // Dog dog2 = new Animal(); -> not possible | int i = f; -> float have no loss
        // of our decimal property.
        // Dog dog2 = (Dog) new Animal(); // ERROR: ClassCastException: Animal cannot be
        // cast to Dog

    }
}
