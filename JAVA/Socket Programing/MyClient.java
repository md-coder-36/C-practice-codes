
import java.io.*;
import java.net.*;
import java.util.Scanner;

public class MyClient {

    public static void main(String[] args) {

        try {
            System.out.println("Client sending a requests to server... ");
            Socket soc = new Socket("localhost", 7069);

            BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));

            System.out.print("Enter a message to send : ");
            String message = userInput.readLine();

            PrintWriter out = new PrintWriter(soc.getOutputStream(), true);
            out.println(message);

            BufferedReader in = new BufferedReader(new InputStreamReader(soc.getInputStream()));
            System.out.println(in.readLine());

            soc.close();
            userInput.close();
            out.close();
            in.close();

        } catch (Exception e) {

            System.out.println(e);
        }
    }
}
