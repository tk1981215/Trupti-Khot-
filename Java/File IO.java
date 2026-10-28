
import java.io.*;

public class FileIOExample {
    public static void main(String[] args) {
        try {
            // 1. Create a file
            File file = new File("example.txt");

            if (file.createNewFile()) {
                System.out.println("File created: " + file.getName());
            } else {
                System.out.println("File already exists.");
            }

            // 2. Write data to the file
            FileWriter writer = new FileWriter(file);
            writer.write("Hello, Java File I/O!\n");
            writer.write("This is my first file program.");
            writer.close();

            System.out.println("Data written successfully.");

            // 3. Read data from the file
            FileReader reader = new FileReader(file);
            BufferedReader br = new BufferedReader(reader);

            String line;
            System.out.println("\nFile contents:");

            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }

            br.close();

            // 4. Append data to the file
            FileWriter appendWriter = new FileWriter(file, true);
            appendWriter.write("\nThis line is appended.");
            appendWriter.close();

            System.out.println("\nData appended successfully.");

        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}
