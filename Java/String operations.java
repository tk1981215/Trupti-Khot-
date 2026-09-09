public class StringExample {
    public static void main(String[] args) {

        // 1. Creating a String
        String str = "Hello Java";

        // 2. Print String
        System.out.println("String: " + str);

        // 3. Find length
        System.out.println("Length: " + str.length());

        // 4. Access a character
        System.out.println("Character at index 1: " + str.charAt(1));

        // 5. Convert to uppercase
        System.out.println("Uppercase: " + str.toUpperCase());

        // 6. Convert to lowercase
        System.out.println("Lowercase: " + str.toLowerCase());

        // 7. Check if String contains something
        System.out.println("Contains Java: " + str.contains("Java"));

        // 8. Check starting and ending
        System.out.println("Starts with Hello: " + str.startsWith("Hello"));
        System.out.println("Ends with Java: " + str.endsWith("Java"));

        // 9. Compare two Strings
        String str2 = "Hello Java";

        System.out.println("Equal: " + str.equals(str2));

        // 10. Compare ignoring uppercase/lowercase
        String str3 = "hello java";

        System.out.println("Equal ignoring case: "
                           + str.equalsIgnoreCase(str3));

        // 11. Extract part of String
        System.out.println("Substring: " + str.substring(0, 5));

        // 12. Find position of a character/String
        System.out.println("Index of J: " + str.indexOf('J'));

        // 13. Replace characters
        System.out.println("Replace: " + str.replace("Java", "World"));

        // 14. Remove spaces from beginning/end
        String name = "   Trupti   ";
        System.out.println("Trimmed: " + name.trim());

        // 15. Split String
        String fruits = "Apple,Banana,Mango";

        String[] arr = fruits.split(",");

        System.out.println("Fruits:");
        for (String fruit : arr) {
            System.out.println(fruit);
        }
    }
}
