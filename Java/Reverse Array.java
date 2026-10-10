import java.util.*;
public class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    for(int i=s.length;i>=0;i--){
      System.out.println(s.charAt(i));
    }
    System.out.println();
  }
}
