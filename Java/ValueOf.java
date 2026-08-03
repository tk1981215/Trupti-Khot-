import java.util.Scanner;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    //int->string
    int a = sc.nextInt();
    String str = String.valueOf(a);
    System.out.println("Str : " + str);
  }
}
