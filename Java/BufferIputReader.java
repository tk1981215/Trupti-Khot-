import java.util.*;
public class Main{
  public static void main(String[] args){
    BufferInputReader bc = new BufferInputReader(BufferInputReader(System.in));
    System.out.println("Enter Name : ");
    String name = bc.next();
    System.out.println("Name : " + name);
  }
}
