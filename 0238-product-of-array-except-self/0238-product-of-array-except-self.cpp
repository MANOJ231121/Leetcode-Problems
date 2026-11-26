class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        vector<int>prefix;
        vector<int>suffix;
        prefix.push_back(1);
        for(int i=1;i<n;i++){
            prefix.push_back(prefix[i-1]*nums[i-1]);

        }
        suffix.push_back(1);
        for(int i= n-2;i>=0;i--){
            suffix.push_back(suffix.back()*nums[i+1]) ;
        }
         reverse(suffix.begin(), suffix.end());
          for(int i = 0; i < n; i++) {
            ans.push_back(prefix[i] * suffix[i]);
        }
        return ans;
        
    }
};