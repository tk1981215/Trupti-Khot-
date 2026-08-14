import java.util.*;
public class Circle{
  private double radius;

  public Circle(double r){
    this.radius=r;
  }
  public double calcArea(){
    return 3.14*this.radius*this.radius;
  }
}
