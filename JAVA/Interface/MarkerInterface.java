// Marker Interface
interface Drawable {
}

// Classes implementing the marker interface
class Circle implements Drawable {
    // Circle implementation
}

class Square implements Drawable {
    // Square implementation
}

public class MarkerInterface {
    public static void main(String[] args) {
        Circle circle = new Circle();
        Square square = new Square();

        if (circle instanceof Drawable) {
            System.out.println("Circle is drawable");
        }

        if (square instanceof Drawable) {
            System.out.println("Square is drawable");
        }
    }
}
// instanceof" operator to check if the objects are instances of the Drawable
// interface. Since both Circle and Square implement the Drawable interface, the
// condition is true for both objects.
// The marker interface Drawable acts as a flag indicating that the implementing
// classes (Circle and Square) possess some characteristic related to being
// drawable. It provides a way to categorize or identify certain classes based
// on their behavior or capabilities without explicitly defining any methods.

// Marker interfaces are often used by frameworks or libraries to enable certain
// functionality or to indicate that a class should be processed in a particular
// way. Examples of marker interfaces in Java include Serializable, Cloneable,
// and Remote, which provide metadata to the Java runtime or frameworks for
// specific purposes.

// It's important to note that marker interfaces do not provide any additional
// behavior directly; their purpose is to provide information or indicate
// membership to a specific group or category of classes.