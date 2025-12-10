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

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;
map<string,int> ma;
int sum(string s){
    s+='a';
    string alpha="";
    string digit="";
    int tong=0;
    forsum(i,0,s.size()){
        if(!isdigit(s[i])) {
            alpha+=s[i];
        }
        else{
            digit+=s[i];
            if(isalpha(s[i+1])){
                tong+=stoi(digit)*ma[alpha];
                alpha="";
                digit=alpha;
            }
        }
    }
    return tong;
}

AhLong{
    
    string s;int n;
    forsum(i,0,10) {
        cin>>s>>n;
        ma[s]=n;
    }
    int m;cin>>m;
    while(m--){
        string t;cin>>t;
        cout<<sum(t)<<endl;
    }
}




