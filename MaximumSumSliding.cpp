class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int i =0;
        int j =0;
        long sum =0;
        long maximum =0;
        while(j<nums.size()){
            mpp[nums[j]]++;
            sum  = sum + nums[j];
            if(j-i+1 <k ){
                j++;
            }
            else if( j-i+1 == k){
                if(mpp.size()== k){
                maximum = max(maximum,sum);
                }
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0){
                    mpp.erase(nums[i]);
                }
                sum = sum -nums[i];
                i++;
                j++;
            }
        }
        return maximum;
        
    }
};