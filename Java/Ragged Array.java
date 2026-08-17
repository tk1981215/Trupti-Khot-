import java.util.*;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int[][] arr = new int[][3];
    arr[0] = int[1];
    arr[1] = int[2];
    arr[2] = int[3];
    System.out.println("Enter elements of array");
    for(int i=0;i<arr.length;i++){
      for(int j=0;j<arr.length;j++){
        arr[i][j]=sc.nextInt();
      }
    }
  }
}
