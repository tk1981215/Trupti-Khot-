import java.util.*;

class Solution {
    public ArrayList<Integer> getMarks(int[] l, int[] r, int[] rank) {
        
        ArrayList<Integer> answer = new ArrayList<>();
        
        int n = l.length;
        int[] prefix = new int[n];
        
        // Calculate total marks up to every interval
        prefix[0] = r[0] - l[0] + 1;
        
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + (r[i] - l[i] + 1);
        }
        
        // Process every rank
        for (int k : rank) {
            
            // Find the interval containing this rank
            int index = 0;
            
            while (prefix[index] < k) {
                index++;
            }
            
            int previousTotal = (index == 0) ? 0 : prefix[index - 1];
            
            int mark = l[index] + (k - previousTotal - 1);
            
            answer.add(mark);
        }
        
        return answer;
    }
}
