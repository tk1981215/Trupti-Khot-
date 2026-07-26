import java.util.Scanner;

class Program {
    public static void main(String[] args) {

        String[] str = new String[4];
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter 4 Strings:");

        for (int i = 0; i < str.length; i++) {
            str[i] = sc.next();
        }

        System.out.println("Strings are:");

        for (String st : str) {
            System.out.println("Str : " + st);
        }

        sc.close();
    }
}
