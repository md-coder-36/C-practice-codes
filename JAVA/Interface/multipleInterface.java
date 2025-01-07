interface Eamployee {

    public int salary();
}

interface Cunstomer {

    public int account();
}

class User implements Eamployee, Cunstomer { // multiple interface injh herit is possible.

    public int salary() {
        int salary = 10000;
        System.out.println("Employee salary : " + salary);
        return salary;
    }

    public int account() {
        int amount = 20000;
        System.out.println("Employee/cunstomer acc_balance : " + amount);
        return amount;
    }
}

public class multipleInterface {
    public static void main(String[] args) {

        User user = new User();
        // user.salary();
        // user.account();

        System.out.println("Total amount in Employee account : " + (user.salary() + user.account()));
    }
}