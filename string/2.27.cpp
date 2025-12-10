#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <sstream>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;

int sum(string s){
	int cnt=0;
	forsum(i,0,s.size()){
		cnt=cnt*10+s[i]-'0';
	}
	return cnt;
}
bool digit(string s){
	forsum(i,0,s.size()){
		if(isalpha(s[i])) {
			return 0;
		}
	}
	return 1;
}

bool cmp(pair<string,int> a,pair<string,int> b){
	if(a.second!=b.second) return a.second>b.second;
	return a.first<b.first;
}

AhLong{
//	string s;
//	map<string,int> ma;
//	vector<string> s1;
//	vector<string> s2;
//	while(getline(cin,s)){
//		string t=" - ";
//		s1.push_back(s.substr(0,s.find(t)));
//		s2.push_back(s.substr(s.find(t)+3,s.size()-1));
//	}
//	forsum(i,0,s1.size()){
//		forsum(j,0,s1[i].size()){
//			if(isdigit(s1[i][j])) ma[s1[i].substr(0,j-1)]+=sum(s1[i].substr(j,s1.size()));
//		}
//	}
//	
//	forsum(i,0,s2.size()){
//		forsum(j,0,s2[i].size()){
//			if(!isdigit(s2[i][j])) ma[s2[i].substr(j+1,s2[i].size())]+=sum(s1[i].substr(0,j));
//		}
//	}
//	vector<pair<string,int>> v;
//	for(auto it:ma){
//		v.push_back(it);
//	}
//	sort(v.begin(),v.end(),cmp);
//	for(auto &x:v){
//		cout<<x.first<<" "<<x.second<<endl;
//	}
// code ban
}

int main() {
    string s;
    map<string, int> scores;

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
}//code sach vai




