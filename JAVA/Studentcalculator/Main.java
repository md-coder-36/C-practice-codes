// import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        // Scanner sc = new Scanner(System.in);

        // System.out.println("Enter student id(last 4 digit) : ");
        // int id = sc.nextInt();

        // System.out.println("Enter student name : ");
        // String name = sc.next();

        // System.out.println("Enter number of subject : ");
        // int number = sc.nextInt();

        // System.out.println("Enter all subject marks : ");

        // int marks[] = new int[number];

        // for (int i : marks) {
        // marks[i] = sc.nextInt();

        // }
        // Student student = new Student(id, name, marks);

        int marks[] = new int[(args.length - 2)];
        int j = 0;
        for (int i = 2; i < args.length; i++) {
            marks[j] = Integer.parseInt(args[i]);
            j++;
        }
        Student student = new Student(Integer.parseInt(args[0]), args[1], marks);

        Result result = new Result(student); // user-defined class object pass as contructor args.
        System.out.println("Total is :" + result.getTotal());
        System.out.println("You have got percentage :" + result.getpercentage() + "%");
        // result.getpercentage();

        System.out.println("Total number of subject : " + student.getMarks().length);

    }
}