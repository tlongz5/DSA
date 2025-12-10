#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <cctype>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;

AhLong{
	string s;cin>>s;
	int i=s.size()-1;
	int dem=1;
	int cnt=1;
	char s1[100];
	while(i>=0){
		s1[cnt++]=s[i];
		if(dem%3==0&&i!=0) s1[cnt++]=',';
		i--;
		dem++;
	}
	forsub(j,cnt-1,1) cout<<s1[j];
}



