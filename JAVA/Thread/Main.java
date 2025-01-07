class IT extends Thread {
    public void run() {
        try {
            Thread.sleep(5001);
            System.out.println("IT");
        } catch (Exception e) {

        }

    }
}

class CE extends Thread {
    public void run() {
        try {
            Thread.sleep(500);
            System.out.println("CE");
        } catch (Exception e) {

        }
    }
}

public class Main {
    public static void main(String args[]) {

        IT i1 = new IT();
        CE c1 = new CE();

        i1.start();
        c1.start();

    }
}