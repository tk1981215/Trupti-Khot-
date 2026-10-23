import java.util.*;

public class CollectionsDemo {
    public static void main(String[] args) {
        // 1. LIST: Ordered collection that allows duplicate elements
        List<String> fruits = new ArrayList<>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Apple"); // Duplicates allowed

        System.out.println("--- List Example ---");
        System.out.println("Fruits: " + fruits);

        // 2. SET: Collection that contains no duplicate elements
        Set<String> uniqueColors = new HashSet<>();
        uniqueColors.add("Red");
        uniqueColors.add("Blue");
        uniqueColors.add("Red"); // Duplicate will be ignored

        System.out.println("\n--- Set Example ---");
        System.out.println("Unique Colors: " + uniqueColors);

        // 3. MAP: Stores key-value pairs (keys must be unique)
        Map<Integer, String> students = new HashMap<>();
        students.put(101, "Aarav");
        students.put(102, "Priya");
        students.put(103, "Rahul");

        System.out.println("\n--- Map Example ---");
        for (Map.Entry<Integer, String> entry : students.entrySet()) {
            System.out.println("ID: " + entry.getKey() + ", Name: " + entry.getValue());
        }
    }
}
