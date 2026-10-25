// Base class (Superclass)
class Vehicle {
    String brand = "Ford"; // Vehicle attribute

    public void honk() {
        System.out.println("Tuut, tuut!");
    }
}

// Derived class (Subclass)
class Car extends Vehicle {
    String modelName = "Mustang"; // Car attribute

    public static void main(String[] args) {
        // Create a myCar object
        Car myCar = new Car();

        // Call the honk() method from the Vehicle class on the myCar object
        myCar.honk();

        // Display the values of the brand attribute from Vehicle 
        // and the modelName from the Car
        System.out.println(myCar.brand + " " + myCar.modelName);
    }
}
