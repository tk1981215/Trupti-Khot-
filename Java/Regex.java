import java.util.regex.*;

public class Main {
    public static void main(String[] args) {

        String text = "My phone number is 9876543210";

        // Regex for finding 10-digit numbers
        String regex = "\\d{10}";

        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(text);

        if (matcher.find()) {
            System.out.println("Phone number found: " + matcher.group());
        } else {
            System.out.println("Phone number not found");
        }
    }
}
