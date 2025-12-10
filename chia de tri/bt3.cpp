#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>
#include <cmath>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)


 
int main(){
	freopen("BIENDOI.INP","r",stdin);
	freopen("BIENDOI.OUT","w",stdout);
	int x;cin>>x;
	string v;
	while(x){
		v.push_back(x%8 +'0');
		x/=8;
	}
	
	int qt=1;
	while(qt){
		string t=v;
		sort(t.begin(),t.end(),greater<char>());
		
		int i=0;
		
		int nho=0;
		int m=v.size();
		while(i<m){
			int c=nho;
			if(v[i]-t[i]+c<0){
				c+=8;
				nho=-1;
			}else nho=0;
			c+=v[i]-t[i];
			v[i]=c+'0';
			i++;
		}cout<<t<<endl<<v<<endl;
		while(--i){
			if(v[i]!='0') break;
			v.pop_back();
		}
		if(v.size()==0) {
			cout<<0;
			return 0;
		}
		string s=v;
		sort(s.begin(),s.end(),greater<char>());
		if(qt>4 || s==v) break;
		qt++;
		cout<<v<<endl<<endl;
		}
		int sum=0;
		int k=0;
		int aa=v.size();
		while(k<aa){
			sum+=(v[k]-'0')*pow(8,k);
			k++;
	}
	cout<<sum;
}

