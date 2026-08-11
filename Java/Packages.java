package sunbeam.geometry;
import sunbeam.geometry.dim3.Cylinder;
import sunbeam.geometry.dim2.Box;
import sunbeam.geometry.dim1.Circle;

public class Program{
  public static void main(String[] args){
    Circle c = new Circle();
    System.out.println("Area : " + calcArea());
    Cylinder cy = new Cylinder();
    System.out.println("Volume : " + calcVolume());
    Box b = new Box();
    System.out.println("Volume : " + calcVolume());
  }
}
