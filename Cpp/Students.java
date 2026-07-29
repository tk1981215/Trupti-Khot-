import java.util.*;

class Student{
  private int id;
  private String name;
  private double marks;

  public Student(){}

  public Student(int id,String name,double marks){
     this.id = id;
     this.name = name;
     this.marks = marks;
    
  }
  public void setId(int id){
   this.id = id;
  }

  public int getId(){
    return this.id;
  }

  public void setName(String name){
     this.name = name;
  }
  public String getName(){
    return this.name;
  }

  public void setMarks(double marks){
    this.marks = marks;
  }

  public double getMarks(){
    return this.marks;
  }
}

public class Main{
  public static void main(String[] args){
  Scanner sc = new Scanner(System.in);
    System.out.println("Enter Number of students : ");
  int size = sc.nextInt();
  Student[] s = new Student[size];
  for(int i =0;i<s.length;i++){
  s[i] = new Student();
  System.out.println("Enter ID : ");
  s[i].setId(sc.nextInt());
  sc.nextLine();
  System.out.println("Enter Name : ");
  s[i].setName(sc.netLine());
  System.out.println("Enter Marks : ");
  s[i].setMarks(sc.nextDouble());
  }
System.out.println("======STUDENTS RECORD=====");
for(int i=0;i<s.length;i++){
  System.out.println("ID : " + s[i].getId());
  System.out.println("Name : " + s[i].getName());
  System.out.println("Marks: " + s[i].getMarks());
    }
  }
}
