import java.util.*;
public class Stack implements StackInterface,QueueInterface{
  Stack(int value){
    
  }
  void push(int value){
    if(top != -1){
      System.out.println("Stack Overflow");
      return -1;
    }
    else{
      System.out.println("Stack Elements : ");
      for(int i=0;i<stack.length;i++){
        stack[i] = value;
      }
    }
  }
}
