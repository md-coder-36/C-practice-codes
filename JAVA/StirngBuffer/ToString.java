class Student {

    private int id = 1;
    private String fname = "Dhameliya";
    private String mname = "Meet";
    private String lname = "Jagdishbhai";

    public String toString() { // Use toString() method return private member.
        return " ID = " + id + "\n FNAME = " + fname + "\n MNAME" + " = " + mname + "\n LNAME = " + lname;
    }

}

public class ToString {

    public static void main(String[] args) {
        Student s = new Student();
        // System.out.println(s); -> Give : Student@15db9742 no give var of student.

        // but use toString() method.
        System.out.println(s); // Gives all Stringsfrom class Student
    }
}
