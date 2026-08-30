package com.sunbeam;
import java.util.*;
public class Main{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    List<Integer> arr = new ArrayList<>();
    System.out.println("Enter No. Of Elements : ");
    int n = sc.nextInt();
    for(int i=0;i<n;i++){
      System.out.println("Enter Num : ");
      int num = sc.nextInt();
      arr.add(num);
    }
    System.out.println("Numbers : " + arr);
  }
}
