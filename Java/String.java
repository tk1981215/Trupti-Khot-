import java.util.*;
public class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter String : ");
    String str = sc.next();
    switch(str){
      case "DAC":
        System.out.println("DAC course");
        break;
      case "DBDA":
        System.out.println("DBDA course");
        break;
      case "DBA":
        System.out.println("DBA course");
        break;
      default:
        System.out.println("Invalid Course");
    }
    sc.close();
  }
}
