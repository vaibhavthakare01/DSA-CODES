
#include <iostream>
using namespace std;

int main() {
    int n, cost[20][20], visited[20] = {0};
    int edges = 0, total = 0;
    
    cout << "Enter number of sensors: ";
    cin >> n;

    cout << "Enter cost matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    visited[0] = 1;

    while (edges < n - 1) {
        int min = 9999, u = -1, v = -1;

        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                for (int j = 0; j < n; j++) {
                    if (!visited[j] && cost[i][j] != 0 &&
                        cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        if (u == -1) {
            cout << "Network is disconnected";
            return 0;
        }

        cout << "Sensor " << u + 1 << " - Sensor "
             << v + 1 << " Cost: " << min << endl;

        visited[v] = 1;
        total += min;
        edges++;
    }

    cout << "Total minimum cost: " << total << endl;

    return 0;
}
