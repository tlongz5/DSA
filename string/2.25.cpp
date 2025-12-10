#include <bits/stdc++.h>

using namespace std;
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int main(){

    int n,m;
    cin>>n>>m;
    if(9*n<m) {
        cout<<"NOT FOUND";
        return 0;
    }
    string s="";
    
    forsum()
    
    for(int i=1;i<=n;i++){
    for(int j=9;j>=1;j--){
        if((m-j)>=(n-i)) {
            s+=to_string(j);
            m-=j;
            break;
        }
    }
    }
    cout<<s;
    
}
