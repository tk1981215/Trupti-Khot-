
import java.math.BigDecimal;
import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        String[] s = new String[n];

        for (int i = 0; i < n; i++) {
            s[i] = sc.next();
        }

        Arrays.sort(s, new Comparator<String>() {

            public int compare(String a, String b) {
                BigDecimal num1 = new BigDecimal(a);
                BigDecimal num2 = new BigDecimal(b);

                return num2.compareTo(num1);
            }
        });

        for (int i = 0; i < n; i++) {
            System.out.println(s[i]);
        }

        sc.close();
    }
}
