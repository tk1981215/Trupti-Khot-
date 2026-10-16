
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String ip = sc.nextLine();
        String[] parts = ip.split("\\.", -1);

        boolean valid = parts.length == 4;

        for (String part : parts) {
            if (!part.matches("[0-9]{1,3}")) {
                valid = false;
                break;
            }

            if (Integer.parseInt(part) > 255) {
                valid = false;
                break;
            }
        }

        System.out.println(valid ? "Valid" : "Invalid");
        sc.close();
    }
}
