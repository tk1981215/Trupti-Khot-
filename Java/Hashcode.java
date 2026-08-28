package com.sunbeam;
import java.util.Objects;
public class Box{
  private int length;
  private int breadth;
  private int height;

  public Box(){}
  public Box(int l , int b,int h){
    super();
    this.length=l;
    this.breadth=b;
    this.height=h;
  }

  @Override
  public int hashCode(){
    return Objects.hash(length,breadth,height);
  }
}
