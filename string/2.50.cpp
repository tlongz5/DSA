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


AhLong{
	string s;
	int n;cin>>n;
	 map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

	while(n--){
		cin>>s;
		int sum=0;
		forsum(i,0,s.size()-1){
			if(roman[s[i]]<roman[s[i+1]]){
				sum-=roman[s[i]];
			}
			else{
				sum+=roman[s[i]];
			}
		}sum+=roman[s[s.size()-1]];
		cout<<sum<<endl;
	}
	
}




