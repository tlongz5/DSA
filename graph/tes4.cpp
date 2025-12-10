#include <bits/stdc++.h>

using namespace std;

#define forsum(i,a,b) for(int i=a;i<b;i++)
#define sorsub(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define fix(prec) {cout << setprecision(prec) << fixed;}
#define pii pair<int,int>
#define pll pair<ll,ll>
int const mod=1e9+7;

int main(){
//	freopen("txt.in","r",stdin);
//	freopen("txt.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	int n,k;cin>>n>>k;
	vector<vector<int>> v(n); // luu chuoi key
	vi a(n);
	for(auto &x:a) cin>>x;
//	cin.ignore();
	while(1){
		string s;
		getline(cin,s);
		if(s=="{}") break;
		
		int size=s.size();
		vector<int> luu_so;
		for(int i=0;i<size;i++){
			if(s[i]=='{'){
				++i;
				string t="";
				while(s[i]!='}'){
					if(s[i]>='0' && s[i]<='9') t+=s[i];
					else if(s[i]==','){
						luu_so.push_back((int)stoi(t));
						t="";
					}
					++i;
				}
			}
			
			else if(s[i]=='>'){
				string t=s.substr(i+2);
				cout<<t<<" ";
//				v[(int)stoi(t)]=luu_so;
			}
		}	
	}
	for(auto &x:v){
		for(auto &k:x) cout<<k<<" ";
		cout<<endl;
	}
	
}
