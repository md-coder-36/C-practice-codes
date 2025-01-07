import java.util.Scanner;

class Student {

    int id;
    String name;
    double percentage;

    // public Student[] printValue(Student ss[]) {
    // // you can change or modify the s[] array of objects.
    // return ss;
    // }

    public void printValue(Student ss[]) { // pass array of objects

        for (int i = 0; i <= ss.length; i++) {
            System.out.println("Id : " + ss[i].id);
            System.out.println("Name :" + ss[i].name);
            System.out.println("Percentage :" + ss[i].percentage);
        }
    }

}

public class PassReturnArrayOfObjInMethod {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Student s[] = new Student[3];

        for (int i = 0; i <= s.length; i++) {

            s[i] = new Student();

            System.out.println("Give student " + (i + 1) + " details : ");

            System.out.print("Enter En_No : ");
            s[i].id = Integer.parseInt(sc.nextLine());

            System.out.print("\nEnter name : ");
            s[i].name = sc.nextLine();

            System.out.print("\nEnter percentage : ");
            s[i].percentage = Double.parseDouble(sc.nextLine());

        }
        Student s1 = new Student();
        s1.printValue(s);
    }

}

// array of objects
// Class_Name obj[ ]= new Class_Name[Array_Length];
