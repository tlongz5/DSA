#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int> sequence(2 * n - 1, 0);
        unordered_set<int> seen;

        function<bool(int)> dfs = [&](int i) {
            if (i == sequence.size()) {
                return true;
            }
            if (sequence[i] ) {
                return dfs(i + 1);
            }
            for (int j = n; j > 0; --j) {
                if (seen.count(j)) {
                    continue;
                }
                seen.insert(j);
                sequence[i] = j;
                if (j == 1) {
                    if (dfs(i + 1)) return true;
                } else if (i + j < sequence.size() && sequence[i + j] == 0) {
                    sequence[i + j] = j;
                    if (dfs(i + 1)) return true;
                    sequence[i + j] = 0;
                }
                sequence[i] = 0;
                seen.erase(j);
            }
            return false;
        };

        dfs(0);
        return sequence;
    }
};

