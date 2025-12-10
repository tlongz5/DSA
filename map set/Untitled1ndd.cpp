class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> dp(nums.size(),2);
        for(int i=0; i< nums.size(); i++)
        {
            dp[i][0]=nums[i];
            dp[i][1]=i;
        }
        sort(nums.begin(),nums.end());
        int l=0; int r=nums.size()-1;
        while(l<r)
        {
            if(dp[l][0]+dp[r][0]>target)
            {
                l++;
            }
            else if(dp[l][0]+dp[r][0]<target)
            {
                r--;
            }
            else
            {
                break;
            }
        }
        vector<int> ans;
        ans.push_back(l);
        ans.push_back(r);
        return ans;
    }
};



