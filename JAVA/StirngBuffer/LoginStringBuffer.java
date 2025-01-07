// import java.lang.StringBuffer;

class LoginStringBuffer {
    public static void main(String[] args) {

        String username = "Meet";
        String password = new StringBuffer(username).reverse().toString();
        String subString = new StringBuffer(username).substring(1).toString();

        String cpassword;
        StringBuffer sb = new StringBuffer(username);
        StringBuffer rev = sb.reverse();

        cpassword = rev.toString();

        System.out.println("Username: " + username);
        System.out.println("cpassword: " + cpassword);
        System.out.println("password: " + password);
        System.out.println("SubString : " + subString);

        if (username.equals(password)) {
            System.out.println("Success");
        } else {
            System.out.println("Fail");
        }
    }
}

// String : String is immutable, its value can't be changed otherwise any
// hacker could change the referenced value to cause security issues in the
// application.
