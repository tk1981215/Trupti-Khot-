class Solution {
    public int palindromicStrings(int n, int k) {
        final long MOD = 1000000007L;
        long ans = 0;
        long perm = 1; // P(k, m)

        for (int m = 0; 2 * m <= n; m++) {

            // Even length = 2m (except empty string)
            if (m > 0) {
                ans = (ans + perm) % MOD;
            }

            // Odd length = 2m + 1
            if (2 * m + 1 <= n && m < k) {
                ans = (ans + perm * (k - m)) % MOD;
            }

            // Calculate P(k, m+1) from P(k, m)
            if (m < k) {
                perm = perm * (k - m) % MOD;
            }
        }

        return (int) ans;
    }
}
