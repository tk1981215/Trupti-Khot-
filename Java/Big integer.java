import java.math.BigInteger;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        BigInteger a = sc.nextBigInteger();
        BigInteger b = sc.nextBigInteger();

        // Addition
        System.out.println(a.add(b));

        // Multiplication
        System.out.println(a.multiply(b));

        sc.close();
    }
}
