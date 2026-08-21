import java.util.*;
public class Main{
  public static void isPallindrome(int x){
    if(x<0){
      return false;
    }
    int original=x;
    int rev=0;
    while(x>0){
      int digit=x%10;
      rev=rev*10+1;
      x=x/10;
    }
    return rev==original;
  }
}
