import java.util.*;
void stockMarket(String[] arr){
  int temp = 0;
  for(int i=1;i<arr.length;i++){
    if(arr[i] > arr[i-1]){
      temp += arr[i];
    }
  }
  return temp;
}
public class Main{
  public static void main(String[] args){
    String[] arr = [10,2,4,3,6,2];
    stockMarket s = new stockMarket(arr);
    
  }
}
