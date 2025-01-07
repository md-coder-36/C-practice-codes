class Car {
    
    // Car class members
    public interface Engine {

        void start();
        void stop();
    }
    // Rest of the Car class implementation
}

class SportsCar extends Car implements Car.Engine {
    @Override
    public void start() {
        // Implementation for starting the sports car engine
    }

    @Override
    public void stop() {
        // Implementation for stopping the sports car engine
    }

    // Rest of the SportsCar class implementation
}

class Sedan extends Car implements Car.Engine {
    @Override
    public void start() {
        // Implementation for starting the sedan engine
    }

    @Override
    public void stop() {
        // Implementation for stopping the sedan engine
    }

    // Rest of the Sedan class implementation
}

public class ClassInsideInterface {

    public static void main(String[] args) {

    }
}

// OCJP CIRTIFICATION
// DBA CIRTIFICATION