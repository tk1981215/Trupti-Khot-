#include <iostream>
using namespace std;

int main() {
    int cost[4][4] = {
        {0, 1, 4, 0},
        {1, 0, 2, 3},
        {4, 2, 0, 5},
        {0, 3, 5, 0}
    };

    bool visited[4] = {false};
    visited[0] = true;

    int edges = 0, minCost = 0;

    cout << "Edges in MST:\n";

    while (edges < 3) {
        int min = 999, x = 0, y = 0;

        for (int i = 0; i < 4; i++) {
            if (visited[i]) {
                for (int j = 0; j < 4; j++) {
                    if (!visited[j] && cost[i][j] != 0) {
                        if (cost[i][j] < min) {
                            min = cost[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }

        cout << x << " - " << y << " : " << min << endl;
        minCost += min;
        visited[y] = true;
        edges++;
    }

    cout << "Minimum Cost = " << minCost << endl;

    return 0;
}
