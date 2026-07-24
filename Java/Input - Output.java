import java.util.Scanner;
class Program{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Name : ");
    String name = sc.next();
    System.out.println("Enter Age : ");
    int age = sc.nextInt();

    System.out.println("Name : " + name);
    System.out.println("Age : " + age);
  }
}
