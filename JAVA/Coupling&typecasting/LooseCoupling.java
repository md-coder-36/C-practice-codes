import java.util.*;

interface Printer {
    void print(String message);
}

class ConsolePrinter implements Printer {

    @Override
    public void print(String message) {
        System.out.println("Console Printer : " + message);
    }
}

class FilePrinter implements Printer {

    @Override
    public void print(String message) {

        // Logic to write message to a file
        System.out.println("File Printer : " + message);
    }
}

class MessageProcessor {
    private Printer printer;

    public MessageProcessor(Printer printer) {
        this.printer = printer;
    }

    public void processMessage(String message) {
        // Process the message
        printer.print(message);
    }
}

public class LooseCoupling {
    public static void main(String[] args) {

        Printer cp = new ConsolePrinter();

        MessageProcessor mp = new MessageProcessor(cp);
        mp.processMessage("Hello, World!");

        Printer fp = new FilePrinter();

        mp = new MessageProcessor(fp);
        mp.processMessage("Hello, File!");
    }

}

/*
 * In this example, we have an interface called Printer that defines a contract
 * for printing messages. Two classes, ConsolePrinter and FilePrinter, implement
 * this interface to provide different printing implementations. The
 * MessageProcessor class has a dependency on the Printer interface rather than
 * the specific printer implementation.
 * 
 * By using loose coupling, the MessageProcessor class can work with any class
 * that implements the Printer interface, such as ConsolePrinter or FilePrinter,
 * without being tightly coupled to the implementation details. This allows us
 * to easily switch or extend the printing behavior by providing a different
 * implementation of the Printer interface.
 * 
 * In the Main class, we demonstrate loose coupling by creating instances of
 * ConsolePrinter and FilePrinter and passing them to the MessageProcessor
 * constructor. This allows the MessageProcessor to utilize the specified
 * printer implementation to process and print messages.
 * 
 * By utilizing loose coupling and programming to interfaces, we achieve
 * flexibility, modularity, and the ability to easily swap or extend components
 * without modifying the core functionality.
 */