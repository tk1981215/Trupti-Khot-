import java.util.*;
public class Main{
  public static String isSmallestLargest(String s,int k){
    String smallest = s.substring(0,k);
    String largest = s.substring(0,k);
    for(int i=1;i<s.length() -k;i++){
      String current = s.substring(i,i+k);
      if(current.compareTo(smallest)<0){
        smallest = current;
      }
      if(current.compareTo(largest)>0){
        largest = current;
      }
    }
    return smallest + "\n" + largest;
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    String str = sc.next();
    int val = sc.nextInt();
    System.out.println("Smallest and Largest substring : " + isSmallestLargest(str,val));
  }
}
