import java.util.Scanner;

public class Match extends Cricket {

    public int no_of_odi;
    public int no_of_test;

    public void setOdi(int odi) {
        this.no_of_odi = odi;
    }

    public void setTestOdi() {

        Scanner sc = new Scanner(System.in);

        System.out.println("enter the number of odi :-");
        this.no_of_odi = sc.nextInt();

        System.out.println("enter the number of test :-");
        this.no_of_test = sc.nextInt();
    }

    public int getOdi() {
        return no_of_odi;
    }

    public int getTest() {
        return no_of_test;
    }

    public void disPlay() {

        System.out.println("number of test :-" + no_of_test);
        System.out.println("number of odi :-" + no_of_odi);
    }
}
