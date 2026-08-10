import java.util.*;
public currentStairs(int n){
  int prev1=0;
  int prev2=1;
  for(int i=0;i<n;i++){
  int current=prev1+prev2;
  prev2=prev1;
  prev1=current;
  }
return prev1;
}
