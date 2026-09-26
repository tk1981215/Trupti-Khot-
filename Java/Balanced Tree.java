import java.util.*;
public class Main{
 public static boolean balancedTree(TreeNode node){
   return height(root)-1;
 }

public int height(TreeNode node){
  if(root==null){
    return 0;
  }
  int leftHeight = height(root.left);
  if(leftHeight == -1){
    return -1;
  }

  int rightHeight=height(root.right);
  if(rightHeight==-1){
    return -1;
  }

if(Math.abs(leftHeight - rightHeight)>1){
  return 0;
}

return Math.max(leftHeight,rightHeight)+1;
}
}
