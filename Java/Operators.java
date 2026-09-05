public class JavaOperatorsDemo {
    public static void main(String[] args) {
        
        // 1. Arithmetic Operators (+, -, *, /, %)
        int a = 10;
        int b = 3;
        System.out.println("--- Arithmetic Operators ---");
        System.out.println("Addition (a + b): " + (a + b));        // 13
        System.out.println("Subtraction (a - b): " + (a - b));     // 7
        System.out.println("Multiplication (a * b): " + (a * b));  // 30
        System.out.println("Division (a / b): " + (a / b));        // 3 (integer division drops decimals)
        System.out.println("Modulus/Remainder (a % b): " + (a % b)); // 1
        
        // 2. Unary Operators (++, --, !)
        int x = 5;
        boolean flag = true;
        System.out.println("\n--- Unary Operators ---");
        System.out.println("Original x: " + x);
        System.out.println("Post-increment (x++): " + (x++)); // Prints 5, then x becomes 6
        System.out.println("Pre-increment (++x): " + (++x));  // x becomes 7, then prints 7
        System.out.println("Invert Boolean (!flag): " + (!flag)); // false
        
        // 3. Assignment & Compound Operators (=, +=, -=, *=)
        int c = 20;
        System.out.println("\n--- Assignment Operators ---");
        c += 5; // Equivalent to c = c + 5
        System.out.println("c += 5: " + c); // 25
        c *= 2; // Equivalent to c = c * 2
        System.out.println("c *= 2: " + c); // 50

        // 4. Relational / Comparison Operators (==, !=, >, <, >=, <=)
        System.out.println("\n--- Relational Operators ---");
        System.out.println("Is a equal to b? (a == b): " + (a == b));      // false
        System.out.println("Is a not equal to b? (a != b): " + (a != b));  // true
        System.out.println("Is a greater than b? (a > b): " + (a > b));    // true
        System.out.println("Is a less than or equal to 10? (a <= 10): " + (a <= 10)); // true

        // 5. Logical Operators (&&, ||, !)
        boolean condition1 = true;
        boolean condition2 = false;
        System.out.println("\n--- Logical Operators ---");
        System.out.println("Logical AND (condition1 && condition2): " + (condition1 && condition2)); // false
        System.out.println("Logical OR (condition1 || condition2): " + (condition1 || condition2));  // true

        // 6. Ternary Operator (condition ? value_if_true : value_if_false)
        System.out.println("\n--- Ternary Operator ---");
        int min = (a < b) ? a : b; 
        System.out.println("The minimum value between a and b is: " + min); // 3
    }
}
