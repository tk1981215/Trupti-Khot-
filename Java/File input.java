import java.io.FileReader;
import java.io.IOException;

public class FileInputExample {
    public static void main(String[] args) {
        try {
            FileReader reader = new FileReader("input.txt");

            int ch;
            while ((ch = reader.read()) != -1) {
                System.out.print((char) ch);
            }

            reader.close();
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
