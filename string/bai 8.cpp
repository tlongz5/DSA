#include <iostream>
#include <cstring>
#include <string>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;

//AhLong{
//    string s;
//    cin >> s;
//    
//    char str[s.length() + 1];
//    strcpy(str, s.c_str());  
//    
//    const char* s1 = "28tech";
//
//    char* token = strtok(str, s1);
//    if(token==NULL){
//    	cout<<"EMPTY";
//    	return 0;
//	}
//    while (token != NULL) {
//        cout << token;
//        token = strtok(NULL, s1);
//    }
//
//    return 0;
//}

AhLong{
	string s;cin>>s;
	string s1="28tech";
	string s2="";
	for(char x:s){
		if(s1.find(x)==string::npos) cout<<x;
		s2+=x;
	}
	if(s2=="") cout<<"EMPTY";
	
	
}

