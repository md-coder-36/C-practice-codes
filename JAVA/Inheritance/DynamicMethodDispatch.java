class Animal {
    public String name;

    public Animal(String name) {
        this.name = name;
        System.out.println("Animal constructor invoked");
    }

    Animal() {
    }

    public void makeSound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog extends Animal {
    private int age;

    public Dog(String name, int age) {
        super(name); // Invoking superclass constructor
        // when creating a child constructor , that time present parent class
        // constructor
        // so we must need to call superclass constructor by super keyword.
        this.age = age;
        System.out.println("Dog constructor invoked");
    }

    Dog() {
        super();
    }

    @Override
    public void makeSound() {
        System.out.println("Dog barks");
    }

    public void printDetails() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}

public class DynamicMethodDispatch {
    public static void main(String[] args) {

        Dog dog = new Dog("Buddy", 3);

        Animal a = new Dog(); // Dynamic method Dispatch

        dog.makeSound();
        dog.printDetails();

        a.makeSound();
        // a.printDetails(); // object is child , to pan we can't call it.
    }
}
