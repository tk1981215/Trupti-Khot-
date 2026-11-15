
public class LogicalOperators {
    public static void main(String[] args) {

        int a = 10;
        int b = 5;

        // Logical AND (&&)
        System.out.println("AND = " + (a > 5 && b < 10));

        // Logical OR (||)
        System.out.println("OR = " + (a > 15 || b < 10));

        // Logical NOT (!)
        System.out.println("NOT = " + !(a > b));
    }
}
