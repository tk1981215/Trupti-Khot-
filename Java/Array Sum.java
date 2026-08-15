import java.util.*;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int[] arr = new int[3];

        System.out.println("Enter Array Elements:");

        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Array Elements:");

        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }

        int add = Main.totalSum(arr);

        System.out.println("Total Sum = " + add);
    }

    public static int totalSum(int[] arr) {

        int sum = 0;

        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }

        return sum;
    }
}
