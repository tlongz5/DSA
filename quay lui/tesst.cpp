#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<=b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

bool sum(string s){
	int cnt=0;
	forsum(i,0,s.size()-1){
		cnt+=s[i]-'0';
	}
	if(cnt%10==0) return 1;
	return 0;
}

bool check(int i){
	string s=to_string(i);
	string t=s;
	reverse(t.begin(),t.end());
	if(sum(s) && t==s) return 1;
	return 0;
}

AhLong{
	int l,r;
	while(cin>>l>>r){
		int dem;
		forsum(i,l,r){
			if(check(i)) ++dem;
		}cout<<dem<<endl;
	}
	
}


class Solution {
public:
    string a[10];
    vector<string> v;

    void dequy(string &s,int i,string& digits){ 
            if(i== digits.size()){
                v.push_back(s);
                return ;
            }

            for(char x : a[digits[i]-'0']){
                    s+=x;
                    dequy(s,i+1,digits);
            }

    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return v;
        a[2]="abc";
        a[3]="def";
        a[4]="ghi";
        a[5]="jkl";
        a[6]="mno";
        a[7]="pqrs";
        a[8]="tuv";
        a[9]="wxyz";

        
        string s="";

        dequy(s,0,digits);
        return v;
    }
};
