import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;
import java.util.List;

public class FileHandlingDemo {

    public static void main(String[] args) {
        // 1. Define the file path
        Path filePath = Paths.get("example.txt");

        try {
            // 2. Create and Write to a File
            String content = "Hello, this is line 1.\nWelcome to Java File Handling!";
            Files.writeString(filePath, content);
            System.out.println("File created and written successfully.");

            // 3. Append content to the File
            String appendContent = "\nThis line is appended.";
            Files.writeString(filePath, appendContent, StandardOpenOption.APPEND);
            System.out.println("Content appended successfully.");

            // 4. Read the entire File as a String (For small files)
            System.out.println("\n--- Reading File Content as String ---");
            String fileContent = Files.readString(filePath);
            System.out.println(fileContent);

            // 5. Read File Line by Line (Better for larger files to save memory)
            System.out.println("\n--- Reading File Line by Line ---");
            List<String> lines = Files.readAllLines(filePath);
            for (int i = 0; i < lines.size(); i++) {
                System.out.println("Line " + (i + 1) + ": " + lines.get(i));
            }

            // 6. Check if File Exists
            if (Files.exists(filePath)) {
                System.out.println("\nFile verification: The file exists.");
            }

            // 7. Delete the File (Optional)
            // Uncomment the line below if you want to delete the file after running
            // Files.delete(filePath);
            // System.out.println("File deleted successfully.");

        } catch (IOException e) {
            System.err.println("An error occurred during file operations: " + e.getMessage());
            e.printStackTrace();
        }
    }
}
