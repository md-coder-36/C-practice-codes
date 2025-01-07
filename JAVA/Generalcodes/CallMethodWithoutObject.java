class Connection {
    private static Connection c = new Connection();

    private Connection() { // constructor is private , so not abale to make object directly.outside the
                           // class.

    }

    public static Connection getInstance() {
        return c; // give a static object, set and any changes for all.
    }
}

public class CallMethodWithoutObject {

    public static void main(String[] args) {

        Connection c = Connection.getInstance();
    }
}

// MVC design pattern._ more on website :