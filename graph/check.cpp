class Solution {
private:
    string backtrack(vector<string>& nums,string s,int cnt){
        if(find(nums.begin(), nums.end(), s) == nums.end()) return s;
        for(int i=cnt;i<s.size();i++){
            for(char j='0';j<='1';j++){
                s[i]=j;
                backtrack(nums,s,cnt+1);
            }
        }
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string str(nums.size(),'0');
        return backtrack(nums,str,0);
    }
};
