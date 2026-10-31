import java.util.Scanner;
import java.util.regex.Pattern;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        String regex = "^[a-zA-Z][a-zA-Z0-9_]{7,29}$";

        for (int i = 0; i < n; i++) {

            String username = sc.next();

            if (Pattern.matches(regex, username)) {
                System.out.println("Valid");
            } else {
                System.out.println("Invalid");
            }
        }

        sc.close();
    }
}
