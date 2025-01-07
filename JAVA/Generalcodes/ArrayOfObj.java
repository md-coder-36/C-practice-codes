class Student {

    public int id;
    public String name;

    // Student class constructor
    Student(int id, String name) {
        this.id = id;
        this.name = name;
    }

    public void display() {
        System.out.println("Student id is: " + id + "\n" + "Student name is: " + name + "\n");
    }
}

public class ArrayOfObj {

    public static void main(String args[]) {

        // Declaring an array of student
        Student[] arr;

        // Allocating memory for 2 objects
        // of type student
        arr = new Student[2];

        // Initializing the first element of the array
        arr[0] = new Student(1701289270, "Satyabrata");

        // Initializing the second element of the array
        arr[1] = new Student(1701289219, "Om Prasad");

        // Displaying the student data
        System.out.println("Student data in student no 1: ");
        arr[0].display();

        System.out.println("Student data in student no 2: ");
        arr[1].display();
    }
}
