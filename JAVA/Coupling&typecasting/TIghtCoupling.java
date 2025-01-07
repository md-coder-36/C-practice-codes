import java.util.ArrayList;
import java.util.List;

class ShoppingCart {
    private List<Item> items;

    public ShoppingCart() {
        items = new ArrayList<>();
    }

    public void addItem(Item item) {
        items.add(item);
    }

    public void calculateTotal() {
        double total = 0;
        for (Item item : items) {
            total += item.getPrice();
        }
        System.out.println("Total: " + total);
    }
}

class Item {
    private String name;
    private double price;

    public Item(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public double getPrice() {
        return price;
    }
}

public class TIghtCoupling {
    public static void main(String[] args) {
        ShoppingCart cart = new ShoppingCart();

        Item item1 = new Item("Shirt", 300);
        Item item2 = new Item("T-Shirt", 200);
        Item item3 = new Item("Pent", 500);

        cart.addItem(item1);
        cart.addItem(item2);
        cart.addItem(item3);

        cart.calculateTotal();
    }

}

/*
 * ShoppingCart class depends on the internal details of the Item
 * class. It assumes that each item has a getPrice() method. If the
 * implementation of the Item class changes or the getPrice() method is renamed
 * or removed, the ShoppingCart class will break. This tight coupling makes the
 * ShoppingCart class highly dependent on the specific implementation of the
 * Item class.
 * 
 * /*
 * 
 * Coupling : coupling refers to the degree of interdependence between
 * different modules or components of a software system. It measures how closely
 * one component is connected to, or relies on, another component.
 * 
 * Tight Coupling : strong dependency between two or more components.
 * Changes made to one class often require modifications in the dependent class
 * 
 * Loose Coupling :situation where components have minimal knowledge of each
 * other and operate independently. Each component defines its own interface,
 * and other components interact through that interface without needing to know
 * the internal details
 * 
 * 
 */