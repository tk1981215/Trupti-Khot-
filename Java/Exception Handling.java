import java.util.*;

class MyException extends Exception{
  MyException(String msg){
    super(msg);
  }
}

class MathOperation{
  int a , b;
  void addition() throws MyException{
    int ans = a + b;
    if(ans<1000){
      throw new MyException("TooLongAddition");
    }
    System.out.println(" Addition =  " + ans);
  }

  void substraction() throws MyException{
    int ans = a - b;
    if(ans <0){
      throw new MyException("NegativeAnswer");
    }
    System.out.println("Substraction = " + ans);
  }

  void multiplication() throws MyException{
    int ans = a * b;
    if(ans > 5000){
      throw new MyException("TooLongMultiplication");
    }
    System.out.println("Multiplication = " + ans);
  }
}
public class Main{
  public static void main(String[] args){
    MathOperation obj = new MathOperation(10,5);
    try{
      obj.addition();
      obj.sustraction();
      obj.multiplication();
    }catch(Exception e){
      System.out.println("Exception : " + e.getMessage());
    }
  }
}
