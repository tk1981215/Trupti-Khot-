import java.util.*;

class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> ans = new ArrayList<>();
        backtrack(s, 0, new ArrayList<>(), ans);
        return ans;
    }

    private void backtrack(String s, int start,
                            List<String> current,
                            List<List<String>> ans) {

        // Reached the end
        if (start == s.length()) {
            ans.add(new ArrayList<>(current));
            return;
        }

        // Try every possible substring
        for (int end = start; end < s.length(); end++) {

            if (isPalindrome(s, start, end)) {

                // Choose
                current.add(s.substring(start, end + 1));

                // Explore
                backtrack(s, end + 1, current, ans);

                // Undo choice
                current.remove(current.size() - 1);
            }
        }
    }

    private boolean isPalindrome(String s, int left, int right) {

        while (left < right) {
            if (s.charAt(left) != s.charAt(right)) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
}
