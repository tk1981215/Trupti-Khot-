#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long Ax, Ay, Bx, By;
        cin >> n >> Ax >> Ay >> Bx >> By;

        vector<long long> x(n), y(n);
        for (int i = 0; i < n; i++) cin >> x[i];
        for (int i = 0; i < n; i++) cin >> y[i];

        long long lowY = min(Ay, By);
        long long highY = max(Ay, By);

        for (int i = 0; i < n; i++) {
            lowY = min(lowY, y[i]);
            highY = max(highY, y[i]);
        }

        long long horizontal = Bx - Ax;

        long long vertical =
            (highY - lowY) +
            min(
                llabs(Ay - lowY) + llabs(By - highY),
                llabs(Ay - highY) + llabs(By - lowY)
            );

        cout << horizontal + vertical << "\n";
    }
    return 0;
}
