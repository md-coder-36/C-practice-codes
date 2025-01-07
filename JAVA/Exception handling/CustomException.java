import java.util.Scanner;

class LoginException extends Exception {

    String message;

    public LoginException(String message) {
        this.message = message; // Error message
    }

    public String toString() {
        return "LoginException: " + message;
    }
}

class Login {

    static String username;
    static String password;

    public Login(String username, String password) {
        this.username = username;
        this.password = password;
    }

    public boolean isAuthenticated() throws LoginException {
        if (username.equals(password)) {
            System.out.println("Login process is complete.\nYour Login is successfull.");
        } else {
            throw new LoginException("Invalid Username or passward,Login unsuccess.Please try again.");
        }
        return true;
    }
}

public class CustomException {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter Username : ");
        String uname = s.next();

        System.out.print("Enter Password : ");
        String pwd = s.next();

        Login user = new Login(uname, pwd);
        try {
            user.isAuthenticated();
        } catch (LoginException e) {
            e.printStackTrace();
        }
    }
}
