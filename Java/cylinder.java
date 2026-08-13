import java.util.*;
public class Cylinder{
  private double height;
  private double radius;

  public Cylinder(double h,double r){
    this.height=h;
    this.radius=r;
  }

  public double calcVolume(){
    return 2*3.24*this.radius*this.height;
  }
}
