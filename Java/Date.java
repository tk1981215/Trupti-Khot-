package com.sunbeam;
import java.util.*;
public class Date{
  private int day;
  private int month;
  private int year;

  public Date(){
    this(1,1,2000);
  }
  public Date(int d,int m,int y){
    this.day=d;
    this.month=m;
    this.year=y;
  }

  public void setDay(int day){
    this.day=day;
  }
  public int getDay(){
    return this.day;
  }
  public void setMonth(int month){
    this.month = month;
  }
  public int getMonth(){
    return this.month;
  }

  public void setYear(int year){
    this.year=year;
  }
  public int getYear(){
    return this.year;
  }

  public void acceptRecord(){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Day : ");
    this.day = sc.nextInt();
    System.out.println("Enter Month : ");
    this.month = sc.nextInt();
    System.out.println("Enter Year : ");
    this.year = sc.nextInt();
  }

  public void displayRecord(){
    System.out.println("Date : " + day + " / " + month + " / " + " / " + year);
  }
  
}
