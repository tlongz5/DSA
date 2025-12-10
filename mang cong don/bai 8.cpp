#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
 
    vector<int> l(m), r(m), d(m);
    for (int i = 0; i < m; ++i) {
        cin >> l[i] >> r[i] >> d[i];
        l[i]--;  
        r[i]--;
    }

    vector<int> b(m + 1, 0);
    while (k--) {
        int x, y;
        cin >> x >> y;
        x--; y--;  
        b[x]++;
        if (y + 1 < m) b[y + 1]--;
    }

    for (int i = 1; i < m; ++i) {
        b[i] += b[i - 1];
    }

    vector<int> delta(n + 1, 0);
    for (int i = 0; i < m; ++i) {
        if (b[i] > 0) {
            delta[l[i]] += d[i] * b[i];
            if (r[i] + 1 < n) delta[r[i] + 1] -= d[i] * b[i];
        }
    }

    int current_addition = 0;
    for (int i = 0; i < n; ++i) {
        current_addition += delta[i];
        c[i] += current_addition;
    }

    for (int i = 0; i < n; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}

