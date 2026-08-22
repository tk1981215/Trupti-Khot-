import java.util.*;
public class Main{
  public static void swap(int[] arr){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
  }
  public static void main(String[] args){
    int[] a = {10,20};
    System.out.println("Before Swap : a = " + arr[0] + " b = " + arr[1]);
    swap(a);
    System.out.println("After Swap : a = " + arr[0] + " b = " + arr[1]);
  }
}
