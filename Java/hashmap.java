import java.util.HashMap;

public class Main {
    public static void main(String[] args) {

        // Create HashMap
        HashMap<Integer, String> map = new HashMap<>();

        // Add elements
        map.put(1, "Apple");
        map.put(2, "Banana");
        map.put(3, "Mango");
        map.put(4, "Orange");

        // Display HashMap
        System.out.println(map);

        // Access value using key
        System.out.println("Value of key 2: " + map.get(2));

        // Remove element
        map.remove(3);

        // Check key exists
        System.out.println("Contains key 1: " + map.containsKey(1));

        // Display size
        System.out.println("Size: " + map.size());

        // Print all elements
        for (Integer key : map.keySet()) {
            System.out.println(key + " = " + map.get(key));
        }
    }
}
