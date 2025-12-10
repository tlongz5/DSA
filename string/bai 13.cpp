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
	getline(cin,s);
	cin.ignore();
	char str[s.length()+1];
	strcpy(str,s.c_str());
	const char* z=".,!?";
	char *token=strtok(str,z);
	while(token!=NULL){
		cout<<token;
		token=strtok(NULL,z);
	}
}



