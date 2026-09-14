public class StringBuilderExample {
    public static void main(String[] args) {

        StringBuilder sb = new StringBuilder("Hello");

        // 1. Append
        sb.append(" World");
        System.out.println("Append: " + sb);

        // 2. Insert
        sb.insert(5, " Java");
        System.out.println("Insert: " + sb);

        // 3. Replace
        sb.replace(0, 5, "Hi");
        System.out.println("Replace: " + sb);

        // 4. Delete
        sb.delete(2, 7);
        System.out.println("Delete: " + sb);

        // 5. Reverse
        sb.reverse();
        System.out.println("Reverse: " + sb);

        // 6. Length
        System.out.println("Length: " + sb.length());

        // 7. Character at index
        System.out.println("Character: " + sb.charAt(2));
    }
}
