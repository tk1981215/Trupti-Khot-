import java.util.*;
public class Main{
  public static int maxSubarray(int[] arr){
    int currentSum = arr[0];
    int maxSum = arr[0];
    for(int i=0;i<arr.length;i++){
      currentSum = Math.max(arr[i],currentSum+arr[i]);
      maxSum = Math.max(currentSum,maxSum);
    }
    return maxSum;
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] nums = new int[n];
    for(int i=0;i<n;i++){
      nums[i] = sc.nextInt();
    }
    System.out.println("MaxSum : " + maxSubarray(nums));
  }
}
