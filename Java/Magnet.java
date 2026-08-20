import java.util.*;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String prev = sc.next();
    int groups = 1;
    for(int i=0;i<n;i++){
      String current = sc.next();
      if(!current.equals(prev)){
        groups++;
      }
      prev = current;
    }
    System.out.println(groups);
  }
}
