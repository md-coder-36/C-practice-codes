public class Main {

    public static void main(String[] args) {

        // RTO r = new RTO(); -> RTO is abstract; can not be created/instantiated.

        System.out.println("**Present BIke** \n");

        Bike b = new Bike();
        b.tostart();
        b.tostop();

        System.out.println("\n**Present Activa** \n");
        Activa a = new Activa();
        a.tostart(); // show own tostart() method.
        a.tostop();

    }
}