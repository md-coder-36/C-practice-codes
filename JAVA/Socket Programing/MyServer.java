
import java.io.*;
import java.net.*;

public class MyServer {

    public static void main(String[] args) {

        try {
            System.out.println("Waiting for client requests...");
            ServerSocket ss = new ServerSocket(7069);

            Socket soc = ss.accept();

            System.out.println("connection established");

            BufferedReader in = new BufferedReader(new InputStreamReader(soc.getInputStream())); // take to client
            String message = in.readLine();

            PrintWriter out = new PrintWriter(soc.getOutputStream(), true);
            out.println("A server sending message : " + message);

            ss.close();
            in.close();
            out.close();
        }

        catch (Exception e) {

            System.out.println(e);
        }
    }
}