import java.util.*;

class Solution {
    private int insertCost, deleteCost, copyCost;
    private Map<Integer, Long> memo = new HashMap<>();

    public int minCost(int n, int i, int d, int c) {
        insertCost = i;
        deleteCost = d;
        copyCost = c;

        return (int) solve(n);
    }

    private long solve(int n) {
        // Base cases
        if (n == 0) return 0;
        if (n == 1) return insertCost;

        if (memo.containsKey(n)) {
            return memo.get(n);
        }

        // Option 1: Insert all characters
        long ans = (long) n * insertCost;

        if (n % 2 == 0) {
            // Build n/2, then double it
            ans = Math.min(ans, solve(n / 2) + copyCost);
        } else {
            // Build (n-1)/2, double it, then insert
            ans = Math.min(ans,
                    solve(n / 2) + copyCost + insertCost);

            // Build (n+1)/2, double it, then delete
            ans = Math.min(ans,
                    solve(n / 2 + 1) + copyCost + deleteCost);
        }

        memo.put(n, ans);
        return ans;
    }
}
