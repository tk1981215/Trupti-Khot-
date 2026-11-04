import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        String[] numbers = new String[n];

        for (int i = 0; i < n; i++) {
            numbers[i] = sc.next();
        }

        Arrays.sort(numbers, new Comparator<String>() {

            public int compare(String a, String b) {

                BigDecimal num1 = new BigDecimal(a);
                BigDecimal num2 = new BigDecimal(b);

                return num2.compareTo(num1);
            }
        });

        for (String s : numbers) {
            System.out.println(s);
        }

        sc.close();
    }
}
