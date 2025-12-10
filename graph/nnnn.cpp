#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    vector<int> v;
    string digits;
    int len;

    void backtrack(int pos, string current, int sum_so_far) {
        if (pos == len) {
            sum_so_far += stoi(current);
            v.push_back(sum_so_far);
            return;
        }
        backtrack(pos + 1, current + digits[pos], sum_so_far);
        if (!current.empty()) {
            int current_num = stoi(current);
            backtrack(pos + 1, string(1, digits[pos]), sum_so_far + current_num);
        }
    }

    int ph(int i) {
        int square = i * i;
        digits = to_string(square);
        len = digits.size();
        v.clear();
        backtrack(0, "", 0);
        for (int num : v) {
            if (num == i) {
                return square;
            }
        }
        return 0;
    }

    int check(int n) {
        if (n == 1) return 1;
        return ph(n) + check(n - 1);
    }

public:
    int punishmentNumber(int n) {
        return check(n);
    }
};
