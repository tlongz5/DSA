class Solution {
private:
    int cmp(string a,string b) return a.size()<b.size();
public:
    string longestCommonPrefix(vector<string>& strs) {
        string t=strs[0];
        string k="";
        string sum="";
        for(int i=1;i<strs.size();i++){
            vector<string> v;
            for(int j=0;j<t.size();j++){
                string check="";
                size_t cnt=strs[i].find(t[j]);
                if(cnt!= string:: npos){
                    while( j<t.size() && cnt<strs[i].size() && strs[i][cnt]== t[j]){
                        check+=t[j];
                        cnt++;j++;
                    }
                    v.push_back(check);
                }
                
            }
            if(v.size==0) return k;
            sort(v.begin(),v.end(),cmp);
            sum=v[v.size()-1];
        }
    }
};

// 
