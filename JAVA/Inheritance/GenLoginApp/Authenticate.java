// public final class Authenticate{  -> nsot able to inherited.
public class Authenticate {

    private String username;
    private String password;

    public Authenticate(String username, String password) {

        this.username = username;
        this.password = password;
    }

    public boolean isAuthenticated() {

        StringBuffer temp = new StringBuffer(username);
        String Newpassword = temp.reverse().toString();

        System.out.println("Username : " + username);
        System.out.println("Reverse Password : " + Newpassword);
        System.out.println("Password : " + password);

        if (username.equals(password) && password.equals(Newpassword)) {
            return true;
        }
        return false;
    }
}