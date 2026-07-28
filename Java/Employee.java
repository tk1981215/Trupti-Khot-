import java.util.*;

class Employee{
  private int id;
  private String name;
  private double salary;

  public void setId(int id){
    id = this.id;
  }

  public void setName(String name){
    name = this.name;
  }

  public void setSalary(double salary){
    salary = this.salary;
  }

  public int getId(){
    return this.id;
  }
  public String getName(){
    return this.name;
  }

  public double getSalary(){
    return this.salary;
  }
}

public class Program{
  Employee[] emp = new Employee[3];
  for(int i=0;i<emp.length;i++){
  emp[i] = new Employee();
  System.out.println("Enter ID: ");
  emp[i].setId(sc.nextInt());
  sc.nextLine();
  System.out.println("Enter Name : ");
  emp[i].setName(sc.nextLine());
  System.out.println("Enter Salary : ");
  emp[i].setSalary(sc.nextDouble());
  }

for(int i=0;i<emp.length;i++){
  System.out.println("Id : " + emp[i].getId());
  System.out.println("Name: " + emp[i].getName());
  System.out.println("Salary : " + emp[i].getSalary());
}
}
