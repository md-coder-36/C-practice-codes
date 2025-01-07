public class MyAuthenticator extends Authenticate {

    private String username;
    private String password;

    public MyAuthenticator(String username, String password) {

        super(username, password);
        this.username = username;
        this.password = password;
    }

    public boolean isAuthenticated() { // change Base class michanism.

        return true;

    }

}
// DISADVANTAGE OF INHERITANCE :
// why change michanism of isAuthenticated() method,
// because you can able to make Authenticate class as perent.And access it.
// then , your password result gives always true.

// final / #define const ( constants) : At runtime , you can;'t modify the
// values.
// ex , Website name.