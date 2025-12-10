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
	string s;cin>>s;
	int dem=0;
	const char* z="/";
	char str[s.size()+1];
	strcpy(str,s.c_str());
	char *token=strtok(str,z);
	while(token!=NULL){
		if(strlen(token)==1) cout<<0;
		cout<<token;
		if(strlen(token)<=2) cout<<"/";
		token=strtok(NULL,z);
	}
}



