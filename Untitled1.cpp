struct db{
    int diem,hs;
};
bool cmp(pair<string,db> a,pair<string,db> b){
    if(a.second.diem != b.second.diem){
        return a.second.diem > b.second.diem;
    }
    if(a.second.hs != b.second.hs){
        return a.second.hs > b.second.hs;
    }
    return a.first < b.first;
}
int main(){
    string s;
    map<string,db> mp;
    int n = 5;
    while(n--){
        getline(cin,s);
        //doc tat ca dong trong luong vao
        string team1,team2;int i=1;
        while(s[i] != ']'){
            team1 += s[i];
            i++;
        }
        //tach thanh cong ten team 1
        i += 2;int x = 0,y = 0;//luu ti so
        while(s[i] != ' '){
            x = x*10 + (s[i] - '0');
            i++;
        }
        i +=3;
        while(s[i] != ' '){
            y = y*10 + (s[i] - '0');
            i++;
        }
        i+=2;
        while(i < (int)s.size() - 1){
            team2 += s[i];
            i++;
        }
         if(mp.count(team1) == 0){
            mp[team1].diem = mp[team2].hs = 0;
         }
         if(mp.count(team2) == 0){
            mp[team2].diem = mp[team2].hs = 0;
         }
         if(x > y){
            mp[team1].diem += 3;
         }
         else if(x < y){
            mp[team2].diem += 3;
         }
         else {
            mp[team1].diem += 1;
            mp[team2].diem += 1;
         }
         mp[team1].hs += x - y;
         mp[team2].hs += y - x;
    }
    vector<pair<string,db>> v;
    for(auto it: mp){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it : v){
        cout << it.first << " " << it.second.diem << " " << it.second.hs << endl;
    }
}
