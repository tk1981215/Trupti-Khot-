import java.util.*;
public class Program{
  public static void acceptRecord(int[] arr){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the elements of array");
    for(int i=0;i<arr.length;i++){
      arr[i][j] = sc.nextInt();
    }
  }
  public static void printRecord(int[] arr){
    System.out.println("Array Elements");
    for(int i=0;i<arr.length;i++){
      System.out.print(arr[i][j]);
    }
    System.out.println();
  }
  public static void main(String[] args){
    int[] arr = new int[3][3];
    Program.acceptRecord(arr);
    Program.printRecord(arr);
  }
}
