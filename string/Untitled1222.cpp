#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// Hàm so sánh d? s?p x?p các c?p (string, int)
bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second) return a.second > b.second;  // S?p x?p theo s? bàn th?ng gi?m d?n
    return a.first < b.first;  // S?p x?p theo tên d?i bóng theo th? t? t? di?n
}

int main() {
    string s;
    map<string, int> scores;

    // Ð?c d?u vào và c?p nh?t s? bàn th?ng
    while (getline(cin, s)) {
        stringstream ss(s);
        string team1, team2, vs;
        int score1, score2;

        ss >> team1;
        string temp;
        while (ss >> temp && isdigit(temp[0]) == 0) {
            team1 += " " + temp; 
        }

        score1 = stoi(temp);

        ss >> vs;

        ss >> score2;

        ss >> team2;
        while (ss >> temp) {
            team2 += " " + temp;
        }

        scores[team1] += score1;
        scores[team2] += score2;
    }

    vector<pair<string, int>> v(scores.begin(), scores.end());
    sort(v.begin(), v.end(), cmp);

    for (const auto& x : v) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}

