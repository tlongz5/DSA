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
string dao(string s){
	reverse(s.begin(),s.end());
	return s;
}
AhLong{
	string s;
	int dem=0;
	while(cin>>s){
		dem++;
		if(dem>1) cout<<" ";
		if((dem%2)==0) cout<<dao(s);
		else cout<<s;
	}
}



